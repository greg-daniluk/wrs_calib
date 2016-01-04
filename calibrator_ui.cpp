/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#include "calibrator_ui.h"
#include "switch.h"

c_calibrator_ui::c_calibrator_ui(c_fiber *fibers, int f_count, c_wrport *calib_port, QWidget *parent) : QWidget(parent)
{
	int f_found = 0;

	setupUi(this);
	this->fibers = fibers;
	this->calib_port = calib_port;
	connect(but_getdata, SIGNAL(clicked()), this, SLOT(get_data()));
	connect(but_calculate, SIGNAL(clicked()), this, SLOT(calculate()));

	/*default values for debugging*/
	delaymm->setText(QString::number(51337235));
	dtxm->setText(QString::number(0));
	drxm->setText(QString::number(0));
	dtxs->setText(QString::number(0));
	drxs->setText(QString::number(15200));
	/******************************/

	combo_selfiber->clear();
	for(int i=0; i<f_count; ++i)
		if(fibers[i].latency()!=0) {
			combo_selfiber->addItem("fiber" + QString::number(i+1) + "; " +
				QString::number(fibers[i].length()) + "m; " +
				QString::number(fibers[i].latency()) + "ps");
			f_found = 1;
		}

	if(! f_found)
		combo_selfiber->addItem("Please measure fiber");
}

void c_calibrator_ui::get_data()
{
	c_wrport port;

	calibrator_active(false);
	port = wr_switch.get_data();
	delaymm->setText(QString::number(port.delay_mm));
	dtxm->setText(QString::number(port.dtx_m));
	drxm->setText(QString::number(port.drx_m));
	dtxs->setText(QString::number(port.dtx_s));
	drxs->setText(QString::number(port.drx_s));
	calibrator_active(true);
}

void c_calibrator_ui::calculate()
{
	c_wrport dat;
	int fsel;	// index of fiber selected with ComboBox

	calibrator_active(false);
	dat.delay_mm = delaymm->text().toInt();
	dat.dtx_m 	= dtxm->text().toInt();
	dat.drx_m 	= drxm->text().toInt();
	dat.dtx_s 	= dtxs->text().toInt();
	dat.drx_s 	= drxs->text().toInt();
	fsel = combo_selfiber->currentIndex();

	calib_port->dtx = (dat.delay_mm - dat.drx_m - dat.drx_s - fibers[fsel].latency())/4;
	calib_port->drx = calib_port->dtx;

	calib_dtx->setText(QString::number(calib_port->dtx));
	calib_drx->setText(QString::number(calib_port->drx));
	calibrator_active(true);
}

void c_calibrator_ui::calibrator_active(bool enable)
{
	combo_selfiber->setEnabled(enable);
	delaymm->setEnabled(enable);
	dtxm->setEnabled(enable);
	drxm->setEnabled(enable);
	dtxs->setEnabled(enable);
	drxs->setEnabled(enable);
}
