/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#include "calibration.h"
#include "switch.h"

#include <QTextStream>

int c_calib::st1_calc_fiber()
{
	QTextStream out(stdout);
	QTextStream in(stdin, QIODevice::ReadOnly);
	c_wrport data_flong, data_fshort, data_f12;

	out << "Plug long fiber, done ? <y>";
	out.flush();
	in.read(1);
	out << "Getting data from the device...";
	out.flush();
	data_flong = wr_switch.get_data();
	/* with the first readout, check if delays are zeroed for measuring fiber
	 * latency */
	if( data_flong.dtx_m != 0 || data_flong.dtx_s != 0) {
		/* that's really bad, we should break this */
		out << "Error, delays should be initialized to 0 prior measuring latency\n";
		return 0;
	}
	out << "Done\n";
	out.flush();

	out << "Plug short fiber, done ? <y>";
	out.flush();
	in.read(1);
	out << "Getting data from the device...";
	out.flush();
	data_fshort = wr_switch.get_data();
	out << "Done\n";
	out.flush();

	out << "Plug both fibers, done ? <y>";
	out.flush();
	in.read(1);
	out << "Getting data from the device...";
	out.flush();
	data_f12 = wr_switch.get_data();
	out << "Done\n";
	out.flush();

	f_long.calc_lat(data_f12, data_fshort);
	f_short.calc_lat(data_f12, data_flong);

	return 1;
}

int c_calib::st2_alpha()
{
	QTextStream out(stdout);
	int off_long, off_short;

	out << "Plug long fiber\n";
	out.flush();
	oscil.read();
	off_long = oscil.get_skew();

	out << "Plug short fiber\n";
	out.flush();
	oscil.read();
	off_long = oscil.get_skew();

	f_long.calc_alpha(off_long - off_short);

	return 1;
}

int c_calib::st3_calibrator()
{
	QTextStream out(stdout);
	QTextStream in(stdin, QIODevice::ReadOnly);
	c_wrport data_flong;

	out << "Plug long fiber, done ? <y>";
	out.flush();
	in.read(1);
	out << "Getting data from the device...";
	out.flush();
	data_flong = wr_switch.get_data();
	/* check if delays are zeroed for calibrating calibrator */
	if( data_flong.dtx_m != 0 || data_flong.dtx_s != 0) {
		/* that's really bad, we should break this */
		out << "Error, delays should be initialized to 0 prior calibration\n";
		return 0;
	}

	calibrator.dtx_m = (data_flong.delay_mm - data_flong.drx_m - data_flong.drx_s - f_long.latency())/4;
	calibrator.drx_m = calibrator.dtx_m;

	return 1;
}

int c_calib::st4_dev_calib()
{
	QTextStream out(stdout);
	QTextStream in(stdin, QIODevice::ReadOnly);
	c_wrport data_flong;
	c_wrport wr_device;
	int d_coarse, pps_skew;

	out << "Plug long fiber, done ? <y>";
	out.flush();
	in.read(1);
	out << "Getting data from the device...";
	out.flush();
	data_flong = wr_switch.get_data();
	/* check if delays are zeroed on calibrated device (Slave) */
	if( data_flong.dtx_s != 0 ) {
		/* that's really bad, we should break this */
		out << "Error, delays on a device should be initialized to 0 prior calibration\n";
		return 0;
	}

	oscil.read();
	pps_skew = oscil.get_skew();

	d_coarse = (data_flong.delay_mm - data_flong.dtx_m - data_flong.drx_m - data_flong.drx_s - f_long.latency())/2;
	wr_device.dtx_s = d_coarse - pps_skew;
	wr_device.drx_s = d_coarse + pps_skew;

	return 1;
}
