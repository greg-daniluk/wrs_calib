/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#pragma once

#include <QStringList>

class c_wrport
{
	public:
		c_wrport();
		c_wrport(const c_wrport &obj);
		~c_wrport();
		//sw_port(int, int, int, int);
	//private:
		int link;
		int lock;
		char mode;

		//servo
		int valid;
		QString *state;
		int delay_mm;
		int dtx_m, drx_m;	// calculated delays if the port is calibrator
		int dtx_s, drx_s;	// calculated delays if the port is calibrated to calibrator
		int cko;
		int ucnt;
		int coar_dtxrx;
		int dtx, drx;
		int is_calibrator;
};

class c_wrswitch
{
	public:
		c_wrport parse_log(char *filename);
		c_wrport get_data();
		void upload_files(int defs);
		void restart_daemons();
		void print_ports();
		void print_servo(c_wrport &servo);
		c_wrport ports[18];
	private:
		static const QString FS_RW;
		static const QString FS_RO;
		static const QString SSH_CMD;
		static const QString HAL_CONF_FILE;
		static const QString SFP_CONF_FILE;
		static const QString HAL_GEN_CONF;
		static const QString SCP_CMD;
		static const QString CONFIG_LOC;
		void parse_ports(QStringList line);
		c_wrport parse_servo(QStringList line);
		//c_wrport parse_log(char *filename);

};

class c_fiber
{
	public:
		c_fiber();
		/* c_wrport sum   - readout from switch when f1+f2 used
		 * c_wrport other - readout from swtich when another fiber was used
		 * 					for measuring f1, _other_ is f2 etc.*/
		void calc_lat(c_wrport sum, c_wrport other);
		/* skew_diff - 1PPS skew with long fiber - 1PPS with short fiber */
		void calc_alpha(int skew_diff);
		int latency();
		int length();
		int alpha_fix();
		float alpha();
		bool valid();
		static const int F_SHORT;
		static const int F_LONG;
	private:
		int len_m;
		int lat_ps;
		float valpha;
		int valpha_fix;
		bool lat_valid, alpha_valid;
};
