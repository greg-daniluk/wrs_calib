/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#include <QtGui/QApplication>
#include "wr_calib.h"
//#include "switch.h"
#include "calibration.h"
#include "confile.h"
#include "main_ui.h"

int main(int argc, char *argv[])
{
	/* TEMP */
	//c_wrswitch wr_switch;
	//wr_switch.parse_log("switch_logs_cut");
	//wr_switch.get_data();
	// c_calib calibration;
	// calibration.st1_calc_fiber();
	// calibration.st2_alpha();
	/********/

	// c_confile hal_config;
	// c_wrport ports[18];
	// for(int i=0; i<18; ++i) {
	// 	ports[i].is_calibrator = 0;
	// 	ports[i].dtx_m = 0;
	// 	ports[i].drx_m = 0;
	// 	ports[i].dtx_s = 0;
	// 	ports[i].drx_s = 0;
	// 	ports[i].mode = 'M';
	// }
	// hal_config.create_hal(ports, 18);

	QApplication app(argc, argv);

	// wr_calib window;
	// window.resize(300, 400);
	// window.move(50, 50);
	// window.show();
	c_main_ui window;
	window.show();

	app.exec();
}
