/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#pragma once

#include <QDesktopWidget>
#include "fiber_ui_qt.h"
#include "switch.h"
#include "calibration.h"

class st1_win : public QWidget, private Ui::form_fiberlat
{
	Q_OBJECT

	public:
		st1_win(c_fiber *fibers, QWidget *parent = 0);

	signals:
		void new_fiber();
		
	private slots:
		void get_data_long();
		void get_data_short();
		void get_data_both();
		void lat_calculate();

	private:
		c_wrswitch wr_switch;
		c_fiber *f_short;
		c_fiber *f_long;
		void long_active(bool enable);
		void short_active(bool enable);
		void both_active(bool enable);
};
