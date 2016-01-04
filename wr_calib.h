/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#pragma once

#include <QMainWindow>

class wr_calib : public QMainWindow
{
	Q_OBJECT
	
	private slots:
		void show_st_latency();

	public:
		wr_calib(QWidget *parent = 0);
};
