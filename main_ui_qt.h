/********************************************************************************
** Form generated from reading UI file 'main_win.ui'
**
** Created: Sun Mar 16 15:48:38 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAIN_UI_QT_H
#define MAIN_UI_QT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quit;
    QAction *actionFiber_latency;
    QAction *actionCalibrator;
    QAction *actionFiber_alpha;
    QAction *actionWR_Device;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *combo_selectPort;
    QCheckBox *chbox_port_isCalib;
    QLabel *label;
    QLabel *label_11;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *dtxm;
    QLineEdit *dtxs;
    QLineEdit *drxm;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *delmm;
    QLineEdit *drxs;
    QLabel *label_4;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *but_link_getdata;
    QLabel *label_9;
    QComboBox *combo_selfiber;
    QLabel *label_10;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *offsetpps;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *but_skew_getdata;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *result_drx;
    QLineEdit *result_dtx;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *but_calculate;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menu_Tools;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(444, 568);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        actionFiber_latency = new QAction(MainWindow);
        actionFiber_latency->setObjectName(QString::fromUtf8("actionFiber_latency"));
        actionCalibrator = new QAction(MainWindow);
        actionCalibrator->setObjectName(QString::fromUtf8("actionCalibrator"));
        actionFiber_alpha = new QAction(MainWindow);
        actionFiber_alpha->setObjectName(QString::fromUtf8("actionFiber_alpha"));
        actionWR_Device = new QAction(MainWindow);
        actionWR_Device->setObjectName(QString::fromUtf8("actionWR_Device"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(20, 30, 401, 461));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        combo_selectPort = new QComboBox(gridLayoutWidget_3);
        combo_selectPort->setObjectName(QString::fromUtf8("combo_selectPort"));

        horizontalLayout->addWidget(combo_selectPort);

        chbox_port_isCalib = new QCheckBox(gridLayoutWidget_3);
        chbox_port_isCalib->setObjectName(QString::fromUtf8("chbox_port_isCalib"));

        horizontalLayout->addWidget(chbox_port_isCalib);


        gridLayout_2->addLayout(horizontalLayout, 2, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 6, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(gridLayoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        dtxm = new QLineEdit(gridLayoutWidget_3);
        dtxm->setObjectName(QString::fromUtf8("dtxm"));

        gridLayout->addWidget(dtxm, 4, 0, 1, 1);

        dtxs = new QLineEdit(gridLayoutWidget_3);
        dtxs->setObjectName(QString::fromUtf8("dtxs"));

        gridLayout->addWidget(dtxs, 6, 0, 1, 1);

        drxm = new QLineEdit(gridLayoutWidget_3);
        drxm->setObjectName(QString::fromUtf8("drxm"));

        gridLayout->addWidget(drxm, 4, 2, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 2, 1, 1);

        delmm = new QLineEdit(gridLayoutWidget_3);
        delmm->setObjectName(QString::fromUtf8("delmm"));

        gridLayout->addWidget(delmm, 2, 0, 1, 1);

        drxs = new QLineEdit(gridLayoutWidget_3);
        drxs->setObjectName(QString::fromUtf8("drxs"));

        gridLayout->addWidget(drxs, 6, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        but_link_getdata = new QPushButton(gridLayoutWidget_3);
        but_link_getdata->setObjectName(QString::fromUtf8("but_link_getdata"));
        but_link_getdata->setCheckable(false);
        but_link_getdata->setChecked(false);

        gridLayout->addWidget(but_link_getdata, 2, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 4, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        combo_selfiber = new QComboBox(gridLayoutWidget_3);
        combo_selfiber->setObjectName(QString::fromUtf8("combo_selfiber"));

        gridLayout_2->addWidget(combo_selfiber, 0, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 4, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 8, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        offsetpps = new QLineEdit(gridLayoutWidget_3);
        offsetpps->setObjectName(QString::fromUtf8("offsetpps"));

        horizontalLayout_2->addWidget(offsetpps);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        but_skew_getdata = new QPushButton(gridLayoutWidget_3);
        but_skew_getdata->setObjectName(QString::fromUtf8("but_skew_getdata"));

        horizontalLayout_2->addWidget(but_skew_getdata);


        gridLayout_2->addLayout(horizontalLayout_2, 6, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 5, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_8 = new QLabel(gridLayoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 2, 1, 1);

        result_drx = new QLineEdit(gridLayoutWidget_3);
        result_drx->setObjectName(QString::fromUtf8("result_drx"));
        result_drx->setReadOnly(true);

        gridLayout_3->addWidget(result_drx, 1, 2, 1, 1);

        result_dtx = new QLineEdit(gridLayoutWidget_3);
        result_dtx->setObjectName(QString::fromUtf8("result_dtx"));
        result_dtx->setReadOnly(true);

        gridLayout_3->addWidget(result_dtx, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        but_calculate = new QPushButton(gridLayoutWidget_3);
        but_calculate->setObjectName(QString::fromUtf8("but_calculate"));

        gridLayout_3->addWidget(but_calculate, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 8, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 7, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 444, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menu_Tools = new QMenu(menubar);
        menu_Tools->setObjectName(QString::fromUtf8("menu_Tools"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menu_Tools->menuAction());
        menuFile->addAction(action_Quit);
        menu_Tools->addAction(actionFiber_latency);
        menu_Tools->addAction(actionFiber_alpha);
        menu_Tools->addAction(actionCalibrator);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        actionFiber_latency->setText(QApplication::translate("MainWindow", "Fiber latency", 0, QApplication::UnicodeUTF8));
        actionCalibrator->setText(QApplication::translate("MainWindow", "Calibrator", 0, QApplication::UnicodeUTF8));
        actionFiber_alpha->setText(QApplication::translate("MainWindow", "Fiber alpha", 0, QApplication::UnicodeUTF8));
        actionWR_Device->setText(QApplication::translate("MainWindow", "WR Device", 0, QApplication::UnicodeUTF8));
        combo_selectPort->clear();
        combo_selectPort->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "port 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "port 18", 0, QApplication::UnicodeUTF8)
        );
        chbox_port_isCalib->setText(QApplication::translate("MainWindow", "Calibrator", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Select fiber used<br/>for calibration</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "PPS skew", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p>delay<span style=\" vertical-align:sub;\">MM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">RXS</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">RXM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">TXM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">TXS</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        but_link_getdata->setText(QApplication::translate("MainWindow", "get data", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Select port to calibrate", 0, QApplication::UnicodeUTF8));
        combo_selfiber->clear();
        combo_selfiber->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Please meaure fiber", 0, QApplication::UnicodeUTF8)
        );
        label_10->setText(QApplication::translate("MainWindow", "Link parameters", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Result", 0, QApplication::UnicodeUTF8));
        but_skew_getdata->setText(QApplication::translate("MainWindow", "get data", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">TX</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">RX</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        but_calculate->setText(QApplication::translate("MainWindow", "Calculate", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menu_Tools->setTitle(QApplication::translate("MainWindow", "&Tools", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAIN_UI_QT_H
