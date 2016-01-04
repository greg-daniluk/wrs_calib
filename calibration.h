/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#pragma once

#include "switch.h"
#include "oscil.h"

class c_calib
{
	public:
		int st1_calc_fiber();
		int st2_alpha();
		int st3_calibrator();
		int st4_dev_calib();
	//private:
		c_wrport calibrator;
		c_oscil oscil;
		c_wrswitch wr_switch;
		c_fiber f_short;
		c_fiber f_long;
};
