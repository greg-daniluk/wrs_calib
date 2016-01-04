/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#pragma once

#include "ui_calibrator.h"
#include "switch.h"

class c_calibrator_ui : public QWidget, private Ui::form_calibrator
{
	Q_OBJECT

	public:
		c_calibrator_ui(c_fiber *fibers, int f_count, c_wrport *calib_port, QWidget *parent = 0);

	private slots:
		void get_data();
		void calculate();

	private:
		c_fiber *fibers;
		c_wrport *calib_port;
		c_wrswitch wr_switch;
		void calibrator_active(bool enable);

};
