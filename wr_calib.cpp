/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#include "wr_calib.h"
#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QMenuBar>
#include <QMenu>
#include <QLabel>
#include <QVBoxLayout>
#include <QLineEdit>
#include "fiber_ui.h"

wr_calib::wr_calib(QWidget *parent) : QMainWindow(parent)
{
	/* FILE MENU */
	QMenu *file;
	QAction *file_new = new QAction("&New Calibration", this);
	QAction *file_open = new QAction("&Open Calibration", this);
	QAction *file_save = new QAction("&Save...", this);
	QAction *file_quit = new QAction("&Quit", this);

	/* Tools MENU */
	QMenu *tools;
	QAction *tools_meas_fiber = new QAction("&Fiber latency", this);

	/* Layout for fiber delay*/
	QVBoxLayout *fdel_vbox = new QVBoxLayout(this);
	QLineEdit *edit_delmm[3] = {new QLineEdit(this)};
	QLabel *lab_delmm[3];

	/* FILE MENU */
	file = menuBar()->addMenu("&File");
	file_new->setShortcut(tr("CTRL+N"));
	file_open->setShortcut(tr("CTRL+O"));
	file_save->setShortcut(tr("CTRL+S"));
	file_quit->setShortcut(tr("CTRL+Q"));
	file->addAction(file_new);
	file->addAction(file_open);
	file->addSeparator();
	file->addAction(file_save);
	file->addSeparator();
	file->addAction(file_quit);

	connect(file_quit, SIGNAL(triggered()), qApp, SLOT(quit()));
	/*************/

	/* TOOLS MENU */
	tools = menuBar()->addMenu("&Tools");
	tools->addAction(tools_meas_fiber);
	connect(tools_meas_fiber, SIGNAL(triggered()), this, SLOT(show_st_latency()));
	/*************/

	/********************/
	/*  Fiber latency	*/
	// QWidget *fdel_win = new QWidget();
	// lab_delmm[0] = new QLabel("delayMM f1");
	// fdel_vbox->setSpacing(1);
	// fdel_vbox->addWidget(lab_delmm[0]);
	// fdel_vbox->addWidget(edit_delmm[0]);

	// fdel_win->setLayout(fdel_vbox);
	// setCentralWidget(fdel_win);
	/********************/
}

void wr_calib::show_st_latency()
{
	// st1_win *calib_st1_win = new  st1_win();
	// //calib_st1_win->resize(250,150);
	// calib_st1_win->setWindowTitle("Measure fiber latency");
	// calib_st1_win->show();
}
