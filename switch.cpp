/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#include "switch.h"
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QProcess>
#include <cmath>

int debug_data = 0;

c_wrport::c_wrport()
{
	state = NULL;
	link = 0;
	lock = 0;
	valid = 0;
	delay_mm = 0;
	dtx_m = 0;
	drx_m = 0;
	dtx_s = 0;
	drx_s = 0;
	cko = 0;
	coar_dtxrx = 0;
	dtx = 0;
	drx = 0;
	is_calibrator = 0;
}

c_wrport::c_wrport(const c_wrport &obj)
{
	link = obj.link;
	lock = obj.lock;
	mode = obj.mode;

	//servo
	valid = obj.valid;
	if(obj.state != NULL)
		state = new QString(*obj.state);
	delay_mm = obj.delay_mm;
	dtx_m	=	obj.dtx_m;
	drx_m	=	obj.drx_m;
	dtx_s	=	obj.dtx_s;
	drx_s	=	obj.drx_s;
	cko		=	obj.cko;
	ucnt	=	obj.ucnt;
	coar_dtxrx	=	obj.coar_dtxrx;
	dtx 	=	obj.dtx;
	drx 	=	obj.drx;
}

c_wrport::~c_wrport()
{
	//if(state)
	//	free(state);
}

c_wrport c_wrswitch::get_data()
{
	return parse_log(NULL);
}

c_wrport c_wrswitch::parse_log(char *filename)
{
	QTextStream out(stdout);
	QStringList lines;
	QString buf;
	QString line;
	QStringList lineSplit;
	c_wrport servo;
	int i = 0;

	#if 0
	// Read from file
	QFile file(filename);
	file.open(QIODevice::ReadOnly | QIODevice::Text);
	QTextStream logs(&file);
	do {
		line = logs.readLine();
		lineSplit = line.split(" ");
		//out << line;
		//out << endl << endl;
		if(lineSplit.size()!=0 && !lineSplit.at(0).compare("PORTS")) {
			out << "found ports " << lineSplit.at(0) << endl;
			parse_ports(lineSplit);
			print_ports();
		}
		else if(lineSplit.size()!=0 && !lineSplit.at(0).compare("SERVO")) {
		 	out << "found servo " << lineSplit.at(0) << endl;
		 	servo = parse_servo(lineSplit);
		 	print_servo(servo);
		}
	}while(!line.isNull());
	file.close();
	#endif

	// Read from WR-Switch
	#if 1
	QProcess proc;
	if(debug_data) out << "starting proc" << endl;
	// proc.start("./script.sh");
	proc.start("ssh -p 2222 root@localhost \"/wr/bin/wr_mon -s\"");
	while(proc.waitForReadyRead(-1)) {
		buf = proc.readAllStandardOutput();
		//out << "stdout " << i << ":"<< line << endl;

		lines = buf.split("\n");
		//out << "buffer divided into " << lines.size() << " lines\n";
		for(int i=0; i<lines.size(); ++i) {
			/*skip empty lines*/
			if( lines.at(i).size()==0 ) continue;

			lineSplit = lines.at(i).split(" ");
			//out << "line " << i << "a" << lines.at(i) << "a size=" << lines.at(i).size() <<endl;
			if(lineSplit.size()!=0 && !lineSplit.at(0).compare("PORTS")) {
				if(debug_data) out << "found ports " << lineSplit.at(0) << endl;
				parse_ports(lineSplit);
				if(debug_data) print_ports();
			}
			else if(lineSplit.size()!=0 && !lineSplit.at(0).compare("SERVO")) {
			 	if(debug_data) out << "found servo " << lineSplit.at(0) << endl;
			 	servo = parse_servo(lineSplit);
			 	print_servo(servo);
			}
		}

		if(servo.valid==1 && servo.state->compare("TRACK_PHASE") &&
				servo.cko>-50 && servo.cko<50) //compare("TRACK_PHASE"))
		 	break;
	}
	proc.kill();
	proc.waitForFinished();
	if(debug_data) out << "ending" << endl;
	
	#endif

	return servo;
}

void c_wrswitch::parse_ports(QStringList line)
{
	int cur_port = 0;
	QStringList field;
	QTextStream out(stdout);
	//PORTS port:wr0 lnk:1 mode:S lock:1 
	for(int i=0; i<line.size(); ++i) {
		field = line[i].split(":");
		if (field.size() != 2) continue;
	
		if( !field[0].compare("port") )
			//set cur_port variable
			cur_port = field[1].right(field[1].size()-2).toInt();	//cut "wr" from the port string
		else if( !field[0].compare("lnk"))
			ports[cur_port].link = field[1].toInt();
		else if( !field[0].compare("mode"))
			ports[cur_port].mode = field[1].at(0).toAscii();
		else if( !field[0].compare("lock"))
			ports[cur_port].lock = field[1].toInt();
	}
}

c_wrport c_wrswitch::parse_servo(QStringList line)
{
	//SERVO sv:1 ss:'TRACK_PHASE' mu:838111 dms:423079 dtxm:0 drxm:800 dtxs:225030 drxs:233830
	//		asym:-8047 crtt:612281 cko:2 setp:7073 ucnt:157382
	QStringList field;
	c_wrport servo;

	for(int i=0; i<line.size(); ++i) {
		field = line[i].split(":");
		if( !field[0].compare("sv"))
			servo.valid = field[1].toInt();
		else if( !field[0].compare("ss"))
			servo.state = new QString(field[1]);
		else if( !field[0].compare("mu"))
			servo.delay_mm = field[1].toInt();
		else if( !field[0].compare("dtxm"))
			servo.dtx_m = field[1].toInt();
		else if( !field[0].compare("drxm"))
			servo.drx_m = field[1].toInt();
		else if( !field[0].compare("dtxs"))
			servo.dtx_s = field[1].toInt();
		else if( !field[0].compare("drxs"))
			servo.drx_s = field[1].toInt();
		else if( !field[0].compare("cko"))
			servo.cko = field[1].toInt();
		else if( !field[0].compare("ucnt"))
			servo.ucnt = field[1].toInt();
	}

	return servo;
}

const QString c_wrswitch::FS_RW = "/wr/bin/wrfs_mnt.sh rw";
const QString c_wrswitch::FS_RO = "/wr/bin/wrfs_mnt.sh ro";
const QString c_wrswitch::SSH_CMD = "ssh root@192.168.3.100";
const QString c_wrswitch::SCP_CMD = "scp root@192.168.3.100:";
const QString c_wrswitch::HAL_CONF_FILE = "defaults/wrsw_hal.conf";
const QString c_wrswitch::SFP_CONF_FILE = "defaults/sfp_database.conf";
const QString c_wrswitch::HAL_GEN_CONF = "stored/wrsw_hal.conf";
const QString c_wrswitch::CONFIG_LOC = "/wr/etc/.";

void c_wrswitch::upload_files(int defs)
{
	QProcess proc;
	QString cmd_rw = SSH_CMD + " \"" + FS_RW + "\"";
	QString cmd_ro = SSH_CMD + " \"" + FS_RO + "\"";
	proc.start(cmd_rw);
	proc.waitForFinished();

	if(defs) {
		proc.start(SCP_CMD+HAL_CONF_FILE+" "+CONFIG_LOC);
		proc.waitForFinished();
		proc.start(SCP_CMD+SFP_CONF_FILE+" "+CONFIG_LOC);
		proc.waitForFinished();
	} else {
		proc.start(SCP_CMD+HAL_GEN_CONF+" "+CONFIG_LOC);
		proc.waitForFinished();
	}

	proc.start(cmd_ro);
	proc.waitForFinished();

}

void c_wrswitch::restart_daemons()
{
	QProcess proc;

	proc.start(SSH_CMD + " \"/root/calib_restart.sh\"");
	proc.waitForFinished();
}

void c_wrswitch::print_ports()
{
	QTextStream out(stdout);

	for (int i=0; i<18; ++i) {
		out << "Port " << i << " link: " << ports[i].link <<
			" lock: " << ports[i].lock << " mode: " << ports[i].mode << endl;
	}
}

void c_wrswitch::print_servo(c_wrport &servo)
{
	QTextStream out(stdout);

	out << "servo valid: " << servo.valid << endl;
	out << "state: " << *servo.state << endl;
	out << "rtt: " << servo.delay_mm << endl;
	out << "d_m: " << servo.dtx_m << " " << servo.drx_m << endl;
	out << "d_s: " << servo.dtx_s << " " << servo.drx_s << endl;
	out << "offset: " << servo.cko << endl;
	out << "ucount: " << servo.ucnt << endl;
}


/****************************************/
/*				C_FIBER					*/
/****************************************/
const int c_fiber::F_SHORT = 1;
const int c_fiber::F_LONG = 0;
c_fiber::c_fiber()
{
	lat_ps = 0;
	valpha = 0;
	valpha_fix = 0;
	len_m = 0;
	lat_valid = false;
	alpha_valid = false;
}

void c_fiber::calc_lat(c_wrport sum, c_wrport other)
{
	QTextStream out(stdout);
	int bare_del_sum;		/* delay_mm f1+f2 without bitslides */
	int bare_del_other;		/* delay_mm for other-fiber without bitslides */

	bare_del_sum = sum.delay_mm - sum.drx_m - sum.drx_s - sum.dtx_m - sum.dtx_s;
	bare_del_other = other.delay_mm - other.drx_m - other.drx_s - other.dtx_m - other.dtx_s;

	lat_ps = bare_del_sum - bare_del_other;
	len_m = lat_ps/2 * 0.0003;
	lat_valid = true;
	alpha_valid = false;
}

int c_fiber::latency()
{
	return lat_ps;
}

int c_fiber::length()
{
	return len_m;
}

int c_fiber::alpha_fix()
{
	return valpha_fix;
}

float c_fiber::alpha()
{
	return valpha;
}

void c_fiber::calc_alpha(int skew_diff)
{
	valpha = 2.0*(float)skew_diff / (0.5 * (float)lat_ps - skew_diff);
	valpha_fix = pow(2, 40) * ( (valpha+1)/(valpha+2)-0.5);
	alpha_valid = true;
}

bool c_fiber::valid()
{
	return lat_valid;// && alpha_valid;
}
