/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#pragma once

#include "fiber_alpha_ui_qt.h"
#include "switch.h"
#include "oscil.h"

class c_alpha_ui : public QWidget, private Ui::form_alpha
{
	Q_OBJECT

	public:
		c_alpha_ui(c_fiber *fibers, int f_count, QWidget *parent = 0);

	signals:
		void new_fiber();
	private slots:
		void get_data_pps1();
		void get_data_pps2();
		void calculate();

	private:
		c_fiber *fibers;
		c_oscil oscil;
};
