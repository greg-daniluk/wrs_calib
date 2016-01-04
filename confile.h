/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#pragma once

#include "switch.h"
#include <QString>

class c_confile
{
	public:
		c_confile();
		int create_hal(c_wrport ports[], int size);
	private:
		static const QString SAVED_HAL_CONF;
		/* sorry I don't know a better way of doing this,
		 * that's why I put here lots of QString defines*/
		static const QString SEC_GLOBAL;
		static const QString SEC_TIMING;
		static const QString SEC_PORTS_OPEN;
		static const QString SEC_CLOSE;
		static const QString PORT_WR;
		static const QString PORT_DTX;
		static const QString PORT_DRX;
		static const QString PORT_MAC_AUTO;
		static const QString PORT_MODE_M;
		static const QString PORT_MODE_S;
};
