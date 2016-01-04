/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#include "fiber_alpha_ui.h"

c_alpha_ui::c_alpha_ui(c_fiber *fibers, int f_count, QWidget *parent) : QWidget(parent)
{
	int f_found = 0;

	setupUi(this);

	this->fibers = fibers;

	connect(but_getdata1, SIGNAL(clicked()), this, SLOT(get_data_pps1()));
	connect(but_getdata2, SIGNAL(clicked()), this, SLOT(get_data_pps2()));
	connect(but_calculate, SIGNAL(clicked()), this, SLOT(calculate()));

	combo_selfiber->clear();
	for(int i=0; i<f_count; ++i)
		if(fibers[i].latency()!=0) {
			combo_selfiber->addItem("fiber" + QString::number(i+1) + "; " +
				QString::number(fibers[i].length()) + "m; " +
				QString::number(fibers[i].latency()) + "ps");
			f_found = 1;
		}

	if(! f_found)
		combo_selfiber->addItem("Please measure fiber");
}

void c_alpha_ui::get_data_pps1()
{
	offsetpps1->setEnabled(false);
	oscil.read();
	offsetpps1->setText(QString::number(oscil.get_skew()));
	offsetpps1->setEnabled(true);
}

void c_alpha_ui::get_data_pps2()
{
	offsetpps2->setEnabled(false);
	oscil.read();
	offsetpps2->setText(QString::number(oscil.get_skew()));
	offsetpps2->setEnabled(true);
}

void c_alpha_ui::calculate()
{
	int skew1, skew2;
	int fsel = combo_selfiber->currentIndex();

	skew1 = offsetpps1->text().toInt();
	skew2 = offsetpps2->text().toInt();

	fibers[fsel].calc_alpha(skew2-skew1);
	alpha->setText(QString::number(fibers[fsel].alpha() * 10000));
	alphan->setText(QString::number(fibers[fsel].alpha_fix()));
	emit new_fiber();
}
