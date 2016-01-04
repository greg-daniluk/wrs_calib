/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#include "confile.h"
#include "switch.h"
#include <QString>
#include <QFile>
#include <QTextStream>


const QString c_confile::SAVED_HAL_CONF = "stored/wrsw_hal.conf";
const QString c_confile::SEC_GLOBAL = 
"global = {\n \
\tsfp_database_path = \"/wr/etc/sfp_database.conf\";\n \
};\n";

const QString c_confile::SEC_TIMING =
"timing = {\n \
\tpps_width = 100000; -- PPS pulse width\n \
--  use_nmea = 1; -- take UTC seconds from NMEA GPS clock connected to /dev/ttyS2\n \
--  mode = \"GrandMaster\"; -- grand-master with external reference\n \
};\n";

const QString c_confile::SEC_PORTS_OPEN = "ports = {\n";
const QString c_confile::SEC_CLOSE = "};\n";
const QString c_confile::PORT_WR = "\twr";
const QString c_confile::PORT_DTX = "\t\tphy_tx_min = ";
const QString c_confile::PORT_DRX = "\t\tphy_rx_min = ";
const QString c_confile::PORT_MAC_AUTO = "\t\tmac_addr = \"auto\";\n";
const QString c_confile::PORT_MODE_M = "\t\tmode = \"wr_master\";\n";
const QString c_confile::PORT_MODE_S = "\t\tmode = \"wr_slave\";\n";

c_confile::c_confile()
{
	//f_opened = 0;
}

int c_confile::create_hal(c_wrport ports[], int size)
{
	QFile file(SAVED_HAL_CONF);
	file.open(QIODevice::WriteOnly | QIODevice::Text);
	QTextStream hal(&file);

	hal << SEC_GLOBAL;
	hal << SEC_TIMING;
	hal << SEC_PORTS_OPEN;

	for(int i=0; i<size; ++i) {
		hal << PORT_WR << i << " = {\n";
		if (ports[i].is_calibrator) {
			hal << PORT_DRX << ports[i].drx_m << ";\n";
			hal << PORT_DTX << ports[i].dtx_m << ";\n";
		} else {
			hal << PORT_DRX << ports[i].drx_s << ";\n";
			hal << PORT_DTX << ports[i].dtx_s << ";\n";
		}
		hal << endl;
		hal << PORT_MAC_AUTO;
		if (ports[i].mode == 'S')
			hal << PORT_MODE_S;
		else
			hal << PORT_MODE_M;
		hal << "\t" + SEC_CLOSE;
	}

	hal << SEC_CLOSE;	//close _ports_ section

	file.close();
	return 1;
}
