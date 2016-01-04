/*
 * Copyright (C) 2015 Grzegorz Daniluk <grzegorz.daniluk@gmail.com>
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#pragma once

#include <QMainWindow>
//#include "main_ui_qt.h"
#include "ui_main_win.h"
#include "fiber_ui.h"
#include "fiber_alpha_ui.h"
#include "calibrator_ui.h"
#include "switch.h"

class c_main_ui : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

    public:
        c_main_ui(QWidget *parent=0);
        
    private slots:
        void show_st_latency();
        void show_st_alpha();
        void show_st_calibrator();
        void update_fibers();
        //actions for WR Switch calibration
        void calculate();
        void port_isCalib(bool state);
        void port_selected(int idx);
        void get_data();

    private:
        st1_win *calib_st1_win;
        c_alpha_ui *alpha_ui_win;
        void main_active(bool enable, int mode);
        void main_clean();
        c_fiber fibers[2];
        c_fiber f_long;
        c_wrswitch wr_switch;
        c_wrport calib_port;
};
