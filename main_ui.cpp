/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#include "main_ui.h"

c_main_ui::c_main_ui(QWidget *parent) : QMainWindow(parent)
{
	setupUi(this);

	action_Quit->setShortcut(tr("CTRL+Q"));
	actionFiber_latency->setShortcut(tr("CTRL+1"));
	actionFiber_alpha->setShortcut(tr("CTRL+2"));
	actionCalibrator->setShortcut(tr("CTRL+3"));
	connect(action_Quit, SIGNAL(triggered()), qApp, SLOT(quit()));
	connect(actionFiber_latency, SIGNAL(triggered()), this, SLOT(show_st_latency()));
	connect(actionFiber_alpha, SIGNAL(triggered()), this, SLOT(show_st_alpha()));
	connect(actionCalibrator, SIGNAL(triggered()), this, SLOT(show_st_calibrator()));

	//WR Device calibration
	connect(but_calculate, SIGNAL(clicked()), this, SLOT(calculate()));
	connect(chbox_port_isCalib, SIGNAL(clicked(bool)), this, SLOT(port_isCalib(bool)));
	connect(combo_selectPort, SIGNAL(currentIndexChanged(int)), this, SLOT(port_selected(int)));
	connect(but_link_getdata, SIGNAL(clicked(bool)), this, SLOT(get_data()));
	//connect(chbox_port_isCalib, SIGNAL(clicked()), this, port_isCalib());

	main_active(false, 0);
}

void c_main_ui::show_st_latency()
{
	calib_st1_win = new st1_win(fibers);
	connect(calib_st1_win, SIGNAL(new_fiber()), this, SLOT(update_fibers()));
	calib_st1_win->setWindowTitle("Measure fiber latency");
	calib_st1_win->show();
}

void c_main_ui::show_st_alpha()
{
	alpha_ui_win = new c_alpha_ui(fibers, 2);
	connect(alpha_ui_win, SIGNAL(new_fiber()), this, SLOT(update_fibers()));
	alpha_ui_win->setWindowTitle("Measure fiber alpha");
	alpha_ui_win->show();
}

void c_main_ui::show_st_calibrator()
{
	c_calibrator_ui *calibrator_ui = new c_calibrator_ui(fibers, 2, &calib_port);
	calibrator_ui->setWindowTitle("Calibrate the WR Calibrator");
	calibrator_ui->show();
}

void c_main_ui::update_fibers()
{
	bool f_found = 0;

	combo_selfiber->clear();
	for(int i=0; i<2; ++i) {
		if( fibers[i].valid() ) {
			combo_selfiber->addItem("fiber" + QString::number(i+1) + "; " +
				QString::number(fibers[i].length()) + "m; " +
				QString::number(fibers[i].latency()) + "ps");
			f_found = true;
		}
	}

	if( f_found )
		main_active(true, 0);
	else {
		combo_selfiber->addItem("Please measure fiber first");
		main_active(false, 0);
	}
}

void c_main_ui::main_active(bool enable, int mode)
{
	combo_selectPort->setEnabled(enable);
	chbox_port_isCalib->setEnabled(enable);
	delmm->setEnabled(enable);
	dtxm->setEnabled(enable);
	drxm->setEnabled(enable);
	dtxs->setEnabled(enable);
	drxs->setEnabled(enable);
	but_link_getdata->setEnabled(enable);
	offsetpps->setEnabled(enable);
	but_skew_getdata->setEnabled(enable);
	result_dtx->setEnabled(enable);
	result_drx->setEnabled(enable);
	but_calculate->setEnabled(enable);

	if (mode==0) {
		but_calculate->setEnabled(enable);
		chbox_port_isCalib->setEnabled(enable);
	} else if (mode == 1) {
		but_calculate->setEnabled(true);
		chbox_port_isCalib->setEnabled(true);
		combo_selectPort->setEnabled(true);
	}
}

void c_main_ui::main_clean()
{
	main_active(true, 0);
	chbox_port_isCalib->setChecked(false);
	delmm->clear();
	dtxm->clear();
	drxm->clear();
	dtxs->clear();
	drxs->clear();
	result_dtx->clear();
	result_drx->clear();
}

void c_main_ui::calculate()
{
	int idx = combo_selectPort->currentIndex();
	int f_idx = combo_selfiber->currentIndex();
	c_wrport *port = &(wr_switch.ports[idx]);
	int coarse;

	if (chbox_port_isCalib->checkState() == Qt::Checked) {
		port->is_calibrator = 1;
		port->dtx = calib_port.dtx;
		port->drx = calib_port.drx;
		result_dtx->setText(QString::number(calib_port.dtx));
		result_drx->setText(QString::number(calib_port.drx));
		//result_dtx->setText(QString::number(220));
		//result_drx->setText(QString::number(225));
	}
	else {
		wr_switch.ports[idx].is_calibrator = 0;
		port->delay_mm = delmm->text().toInt();
		port->dtx_m = dtxm->text().toInt();
		port->drx_m = drxm->text().toInt();
		port->dtx_s = dtxs->text().toInt();
		port->drx_s = drxs->text().toInt();
		port->cko   = offsetpps->text().toInt();

		//TODO: generate error when dtxs!=0
		port->coar_dtxrx = (port->delay_mm - port->dtx_m - port->drx_m -
			port->drx_s - fibers[f_idx].latency())/2;

		port->dtx = port->coar_dtxrx - port->cko;
		port->drx = port->coar_dtxrx + port->cko;

		result_dtx->setText(QString::number(port->dtx));
		result_drx->setText(QString::number(port->drx));
	}
}

void c_main_ui::port_isCalib(bool state)
{
	main_active(!state, 1);
}

void c_main_ui::port_selected(int idx)
{
	main_clean();
	result_dtx->setText(QString::number(wr_switch.ports[idx].dtx));
	result_drx->setText(QString::number(wr_switch.ports[idx].drx));
	if (wr_switch.ports[idx].is_calibrator) {
		chbox_port_isCalib->setChecked(true);
		port_isCalib(true);
	}
	delmm->setText(QString::number(wr_switch.ports[idx].delay_mm));
	dtxm->setText(QString::number(wr_switch.ports[idx].dtx_m));
	drxm->setText(QString::number(wr_switch.ports[idx].drx_m));
	dtxs->setText(QString::number(wr_switch.ports[idx].dtx_s));
	drxs->setText(QString::number(wr_switch.ports[idx].drx_s));
}

void c_main_ui::get_data()
{
	c_wrport port;

	port = wr_switch.get_data();
	delmm->setText(QString::number(port.delay_mm));
	dtxm ->setText(QString::number(port.dtx_m));
	drxm ->setText(QString::number(port.drx_m));
	dtxs ->setText(QString::number(port.dtx_s));
	drxs ->setText(QString::number(port.drx_s));
}
