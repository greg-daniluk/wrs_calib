/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#include "fiber_ui.h"
#include <QTextEdit>
#include <QLabel>
#include "switch.h"

#include <QTextStream>

st1_win::st1_win(c_fiber *fibers, QWidget *parent) : QWidget(parent)
{
	/* Labels */
	// QLabel *l_f1_delaymm = new QLabel("Delay_MM", this);

	// QTextEdit *edit = new QTextEdit(this);
	// edit->setGeometry(100, 100, 200, 100);
	//Ui::Form ui;
	//ui.setupUi(this);
	f_long  = &fibers[c_fiber::F_LONG];
	f_short = &fibers[c_fiber::F_SHORT];

	setupUi(this);

	/* default values for debugging */
	long_delmm->setText(QString::number(51337235));
	long_dtxm->setText(QString::number(0));
	long_drxm->setText(QString::number(0));
	long_dtxs->setText(QString::number(0));
	long_drxs->setText(QString::number(15200));
	short_delmm->setText(QString::number(968492));
	short_dtxm->setText(QString::number(0));
	short_drxm->setText(QString::number(8800));
	short_dtxs->setText(QString::number(0));
	short_drxs->setText(QString::number(9600));
	both_delmm->setText(QString::number(51374405));
	both_dtxm->setText(QString::number(0));
	both_drxm->setText(QString::number(1600));
	both_dtxs->setText(QString::number(0));
	both_drxs->setText(QString::number(800));
	/********************************/

	connect(long_getdata, SIGNAL(clicked()), this, SLOT(get_data_long()));
	connect(short_getdata, SIGNAL(clicked()), this, SLOT(get_data_short()));
	connect(both_getdata, SIGNAL(clicked()), this, SLOT(get_data_both()));
	connect(pushButton_3, SIGNAL(clicked()), this, SLOT(lat_calculate()));
}

void st1_win::lat_calculate()
{
	QTextStream out(stdout);
	c_wrport port_long, port_short, port_both;
	int short_lat, long_lat;

	long_active(false);
	short_active(false);
	both_active(false);

	/*first get numbers from QLineEdit and convert to int*/
	port_long.delay_mm 	= long_delmm->text().toInt();
	port_long.dtx_m 	= long_dtxm->text().toInt();
	port_long.drx_m 	= long_drxm->text().toInt();
	port_long.dtx_s 	= long_dtxs->text().toInt();
	port_long.drx_s 	= long_drxs->text().toInt();
	port_short.delay_mm = short_delmm->text().toInt();
	port_short.dtx_m 	= short_dtxm->text().toInt();
	port_short.drx_m 	= short_drxm->text().toInt();
	port_short.dtx_s 	= short_dtxs->text().toInt();
	port_short.drx_s 	= short_drxs->text().toInt();
	port_both.delay_mm 	= both_delmm->text().toInt();
	port_both.dtx_m 	= both_dtxm->text().toInt();
	port_both.drx_m 	= both_drxm->text().toInt();
	port_both.dtx_s 	= both_dtxs->text().toInt();
	port_both.drx_s 	= both_drxs->text().toInt();


	f_long->calc_lat(port_both, port_short);
	f_short->calc_lat(port_both, port_long);

	short_lat = f_short->latency();
	long_lat = f_long->latency();
	f1_lat->setText(QString::number(long_lat));
	f2_lat->setText(QString::number(short_lat));

	long_active(true);
	short_active(true);
	both_active(true);
	emit new_fiber();
}

void st1_win::get_data_long()
{
	c_wrport port;

	long_active(false);
	port = wr_switch.get_data();
	long_delmm->setText(QString::number(port.delay_mm));
	long_dtxm->setText(QString::number(port.dtx_m));
	long_drxm->setText(QString::number(port.drx_m));
	long_dtxs->setText(QString::number(port.dtx_s));
	long_drxs->setText(QString::number(port.drx_s));
	long_active(true);
}

void st1_win::get_data_short()
{
	c_wrport port;

	short_active(false);
	port = wr_switch.get_data();
	short_delmm->setText(QString::number(port.delay_mm));
	short_dtxm->setText(QString::number(port.dtx_m));
	short_drxm->setText(QString::number(port.drx_m));
	short_dtxs->setText(QString::number(port.dtx_s));
	short_drxs->setText(QString::number(port.drx_s));
	short_active(true);
}

void st1_win::get_data_both()
{
	c_wrport port;

	both_active(false);
	port = wr_switch.get_data();
	both_delmm->setText(QString::number(port.delay_mm));
	both_dtxm->setText(QString::number(port.dtx_m));
	both_drxm->setText(QString::number(port.drx_m));
	both_dtxs->setText(QString::number(port.dtx_s));
	both_drxs->setText(QString::number(port.drx_s));
	both_active(true);
}

void st1_win::long_active(bool enable)
{
	long_getdata->setEnabled(enable);
	long_delmm->setEnabled(enable);
	long_dtxm->setEnabled(enable);
	long_drxm->setEnabled(enable);
	long_dtxs->setEnabled(enable);
	long_drxs->setEnabled(enable);
}

void st1_win::short_active(bool enable)
{
	short_getdata->setEnabled(enable);
	short_delmm->setEnabled(enable);
	short_dtxm->setEnabled(enable);
	short_drxm->setEnabled(enable);
	short_dtxs->setEnabled(enable);
	short_drxs->setEnabled(enable);
}

void st1_win::both_active(bool enable)
{
	both_getdata->setEnabled(enable);
	both_delmm->setEnabled(enable);
	both_dtxm->setEnabled(enable);
	both_drxm->setEnabled(enable);
	both_dtxs->setEnabled(enable);
	both_drxs->setEnabled(enable);
}
