/********************************************************************************
** Form generated from reading UI file 'fiber_lat.ui'
**
** Created: Sun Nov 24 23:18:35 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef FIBER_UI_QT_H
#define FIBER_UI_QT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_form_fiberlat
{
public:
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *long_dtxm;
    QLineEdit *long_dtxs;
    QLineEdit *long_drxm;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *long_delmm;
    QLineEdit *long_drxs;
    QLabel *label_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *long_getdata;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *short_dtxm;
    QLineEdit *short_dtxs;
    QLineEdit *short_drxm;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *short_delmm;
    QLineEdit *short_drxs;
    QLabel *label_9;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *short_getdata;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLineEdit *f1_lat;
    QLabel *label_11;
    QLineEdit *f2_lat;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_12;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_4;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_13;
    QLineEdit *both_dtxm;
    QLineEdit *both_dtxs;
    QLineEdit *both_drxm;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *both_delmm;
    QLineEdit *both_drxs;
    QLabel *label_16;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *both_getdata;

    void setupUi(QWidget *form_fiberlat)
    {
        if (form_fiberlat->objectName().isEmpty())
            form_fiberlat->setObjectName(QString::fromUtf8("form_fiberlat"));
        form_fiberlat->resize(679, 460);
        groupBox = new QGroupBox(form_fiberlat);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 301, 211));
        groupBox->setAutoFillBackground(false);
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 281, 164));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        long_dtxm = new QLineEdit(gridLayoutWidget);
        long_dtxm->setObjectName(QString::fromUtf8("long_dtxm"));

        gridLayout->addWidget(long_dtxm, 4, 0, 1, 1);

        long_dtxs = new QLineEdit(gridLayoutWidget);
        long_dtxs->setObjectName(QString::fromUtf8("long_dtxs"));

        gridLayout->addWidget(long_dtxs, 6, 0, 1, 1);

        long_drxm = new QLineEdit(gridLayoutWidget);
        long_drxm->setObjectName(QString::fromUtf8("long_drxm"));

        gridLayout->addWidget(long_drxm, 4, 2, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 2, 1, 1);

        long_delmm = new QLineEdit(gridLayoutWidget);
        long_delmm->setObjectName(QString::fromUtf8("long_delmm"));

        gridLayout->addWidget(long_delmm, 2, 0, 1, 1);

        long_drxs = new QLineEdit(gridLayoutWidget);
        long_drxs->setObjectName(QString::fromUtf8("long_drxs"));

        gridLayout->addWidget(long_drxs, 6, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        long_getdata = new QPushButton(gridLayoutWidget);
        long_getdata->setObjectName(QString::fromUtf8("long_getdata"));
        long_getdata->setCheckable(false);
        long_getdata->setChecked(false);

        gridLayout->addWidget(long_getdata, 2, 2, 1, 1);

        groupBox_2 = new QGroupBox(form_fiberlat);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(360, 20, 311, 211));
        gridLayoutWidget_2 = new QWidget(groupBox_2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 30, 281, 164));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        short_dtxm = new QLineEdit(gridLayoutWidget_2);
        short_dtxm->setObjectName(QString::fromUtf8("short_dtxm"));

        gridLayout_2->addWidget(short_dtxm, 4, 0, 1, 1);

        short_dtxs = new QLineEdit(gridLayoutWidget_2);
        short_dtxs->setObjectName(QString::fromUtf8("short_dtxs"));

        gridLayout_2->addWidget(short_dtxs, 6, 0, 1, 1);

        short_drxm = new QLineEdit(gridLayoutWidget_2);
        short_drxm->setObjectName(QString::fromUtf8("short_drxm"));

        gridLayout_2->addWidget(short_drxm, 4, 2, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 5, 2, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 3, 2, 1, 1);

        short_delmm = new QLineEdit(gridLayoutWidget_2);
        short_delmm->setObjectName(QString::fromUtf8("short_delmm"));

        gridLayout_2->addWidget(short_delmm, 2, 0, 1, 1);

        short_drxs = new QLineEdit(gridLayoutWidget_2);
        short_drxs->setObjectName(QString::fromUtf8("short_drxs"));

        gridLayout_2->addWidget(short_drxs, 6, 2, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 3, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 5, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 1, 1, 1);

        short_getdata = new QPushButton(gridLayoutWidget_2);
        short_getdata->setObjectName(QString::fromUtf8("short_getdata"));

        gridLayout_2->addWidget(short_getdata, 2, 2, 1, 1);

        groupBox_3 = new QGroupBox(form_fiberlat);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(360, 240, 291, 141));
        gridLayoutWidget_3 = new QWidget(groupBox_3);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 30, 281, 61));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        f1_lat = new QLineEdit(gridLayoutWidget_3);
        f1_lat->setObjectName(QString::fromUtf8("f1_lat"));
        f1_lat->setReadOnly(true);

        gridLayout_3->addWidget(f1_lat, 1, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

        f2_lat = new QLineEdit(gridLayoutWidget_3);
        f2_lat->setObjectName(QString::fromUtf8("f2_lat"));

        gridLayout_3->addWidget(f2_lat, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 100, 98, 27));
        groupBox_4 = new QGroupBox(form_fiberlat);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 240, 301, 211));
        gridLayoutWidget_4 = new QWidget(groupBox_4);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 30, 281, 164));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(gridLayoutWidget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_4->addWidget(label_13, 0, 0, 1, 1);

        both_dtxm = new QLineEdit(gridLayoutWidget_4);
        both_dtxm->setObjectName(QString::fromUtf8("both_dtxm"));

        gridLayout_4->addWidget(both_dtxm, 4, 0, 1, 1);

        both_dtxs = new QLineEdit(gridLayoutWidget_4);
        both_dtxs->setObjectName(QString::fromUtf8("both_dtxs"));

        gridLayout_4->addWidget(both_dtxs, 6, 0, 1, 1);

        both_drxm = new QLineEdit(gridLayoutWidget_4);
        both_drxm->setObjectName(QString::fromUtf8("both_drxm"));

        gridLayout_4->addWidget(both_drxm, 4, 2, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_4->addWidget(label_14, 5, 2, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_4->addWidget(label_15, 3, 2, 1, 1);

        both_delmm = new QLineEdit(gridLayoutWidget_4);
        both_delmm->setObjectName(QString::fromUtf8("both_delmm"));

        gridLayout_4->addWidget(both_delmm, 2, 0, 1, 1);

        both_drxs = new QLineEdit(gridLayoutWidget_4);
        both_drxs->setObjectName(QString::fromUtf8("both_drxs"));

        gridLayout_4->addWidget(both_drxs, 6, 2, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 3, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 5, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 2, 1, 1, 1);

        both_getdata = new QPushButton(gridLayoutWidget_4);
        both_getdata->setObjectName(QString::fromUtf8("both_getdata"));

        gridLayout_4->addWidget(both_getdata, 2, 2, 1, 1);


        retranslateUi(form_fiberlat);

        QMetaObject::connectSlotsByName(form_fiberlat);
    } // setupUi

    void retranslateUi(QWidget *form_fiberlat)
    {
        form_fiberlat->setWindowTitle(QApplication::translate("form_fiberlat", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("form_fiberlat", "Long fiber (f1)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("form_fiberlat", "<html><head/><body><p>delay<span style=\" vertical-align:sub;\">MM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("form_fiberlat", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">RXS</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("form_fiberlat", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">RXM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("form_fiberlat", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">TXM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("form_fiberlat", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">TXS</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        long_getdata->setText(QApplication::translate("form_fiberlat", "get data", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("form_fiberlat", "Short fiber (f2)", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("form_fiberlat", "<html><head/><body><p>delay<span style=\" vertical-align:sub;\">MM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("form_fiberlat", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">RXS</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("form_fiberlat", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">RXM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("form_fiberlat", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">TXM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("form_fiberlat", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">TXS</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        short_getdata->setText(QApplication::translate("form_fiberlat", "get data", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("form_fiberlat", "Result", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("form_fiberlat", "f1 latency [ps]", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("form_fiberlat", "f2 latency [ps]", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("form_fiberlat", "Calculate", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("form_fiberlat", "Both fibers (f1+f2)", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("form_fiberlat", "<html><head/><body><p>delay<span style=\" vertical-align:sub;\">MM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("form_fiberlat", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">RXS</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("form_fiberlat", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">RXM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("form_fiberlat", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">TXM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("form_fiberlat", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">TXS</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        both_getdata->setText(QApplication::translate("form_fiberlat", "get data", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class form_fiberlat: public Ui_form_fiberlat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // FIBER_UI_QT_H
