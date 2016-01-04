/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#pragma once

class c_oscil
{
	public:
		int read();
		int get_skew();
	private:
		int pps_skew;	//[ps]
};
