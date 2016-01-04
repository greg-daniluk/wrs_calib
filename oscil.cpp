/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#include "oscil.h"
#include <QTextStream>

int c_oscil::read()
{
	QTextStream out(stdout);
	QTextStream in(stdin);
	QString line;

	out << "Tell me the skew in [ps]: ";
	out.flush();
	line = in.readLine();
	pps_skew = line.toInt();
}

int c_oscil::get_skew()
{
	return pps_skew;
}
