/********************************************************************************
** Form generated from reading UI file 'calibrator.ui'
**
** Created: Sun Nov 24 23:49:37 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CALIBRATOR_UI_QT_H
#define CALIBRATOR_UI_QT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_form_calibrator
{
public:
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *dtxm;
    QLineEdit *dtxs;
    QLineEdit *drxm;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *delaymm;
    QLineEdit *drxs;
    QLabel *label_9;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *but_getdata;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *combo_selfiber;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_4;
    QPushButton *but_calculate;
    QLineEdit *calib_dtx;
    QLineEdit *calib_drx;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;

    void setupUi(QWidget *form_calibrator)
    {
        if (form_calibrator->objectName().isEmpty())
            form_calibrator->setObjectName(QString::fromUtf8("form_calibrator"));
        form_calibrator->resize(348, 487);
        groupBox_2 = new QGroupBox(form_calibrator);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 90, 311, 211));
        gridLayoutWidget_2 = new QWidget(groupBox_2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 30, 281, 164));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        dtxm = new QLineEdit(gridLayoutWidget_2);
        dtxm->setObjectName(QString::fromUtf8("dtxm"));

        gridLayout_2->addWidget(dtxm, 4, 0, 1, 1);

        dtxs = new QLineEdit(gridLayoutWidget_2);
        dtxs->setObjectName(QString::fromUtf8("dtxs"));

        gridLayout_2->addWidget(dtxs, 6, 0, 1, 1);

        drxm = new QLineEdit(gridLayoutWidget_2);
        drxm->setObjectName(QString::fromUtf8("drxm"));

        gridLayout_2->addWidget(drxm, 4, 2, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 5, 2, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 3, 2, 1, 1);

        delaymm = new QLineEdit(gridLayoutWidget_2);
        delaymm->setObjectName(QString::fromUtf8("delaymm"));

        gridLayout_2->addWidget(delaymm, 2, 0, 1, 1);

        drxs = new QLineEdit(gridLayoutWidget_2);
        drxs->setObjectName(QString::fromUtf8("drxs"));

        gridLayout_2->addWidget(drxs, 6, 2, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 3, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 5, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 1, 1, 1);

        but_getdata = new QPushButton(gridLayoutWidget_2);
        but_getdata->setObjectName(QString::fromUtf8("but_getdata"));

        gridLayout_2->addWidget(but_getdata, 2, 2, 1, 1);

        groupBox = new QGroupBox(form_calibrator);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 301, 63));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        combo_selfiber = new QComboBox(groupBox);
        combo_selfiber->setObjectName(QString::fromUtf8("combo_selfiber"));

        gridLayout->addWidget(combo_selfiber, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(form_calibrator);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 330, 301, 141));
        gridLayoutWidget = new QWidget(groupBox_3);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 281, 101));
        gridLayout_4 = new QGridLayout(gridLayoutWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        but_calculate = new QPushButton(gridLayoutWidget);
        but_calculate->setObjectName(QString::fromUtf8("but_calculate"));

        gridLayout_4->addWidget(but_calculate, 3, 0, 1, 1);

        calib_dtx = new QLineEdit(gridLayoutWidget);
        calib_dtx->setObjectName(QString::fromUtf8("calib_dtx"));
        calib_dtx->setReadOnly(true);

        gridLayout_4->addWidget(calib_dtx, 1, 0, 1, 1);

        calib_drx = new QLineEdit(gridLayoutWidget);
        calib_drx->setObjectName(QString::fromUtf8("calib_drx"));
        calib_drx->setReadOnly(true);

        gridLayout_4->addWidget(calib_drx, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);


        retranslateUi(form_calibrator);

        QMetaObject::connectSlotsByName(form_calibrator);
    } // setupUi

    void retranslateUi(QWidget *form_calibrator)
    {
        form_calibrator->setWindowTitle(QApplication::translate("form_calibrator", "Form", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("form_calibrator", "Slave Calibrator", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("form_calibrator", "<html><head/><body><p>delay<span style=\" vertical-align:sub;\">MM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("form_calibrator", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">RXS</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("form_calibrator", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">RXM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("form_calibrator", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">TXM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("form_calibrator", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">TXS</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        but_getdata->setText(QApplication::translate("form_calibrator", "get data", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("form_calibrator", "Select used fiber", 0, QApplication::UnicodeUTF8));
        combo_selfiber->clear();
        combo_selfiber->insertItems(0, QStringList()
         << QApplication::translate("form_calibrator", "measure fiber first", 0, QApplication::UnicodeUTF8)
        );
        groupBox_3->setTitle(QApplication::translate("form_calibrator", "Result", 0, QApplication::UnicodeUTF8));
        but_calculate->setText(QApplication::translate("form_calibrator", "Calculate", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("form_calibrator", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">RX</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("form_calibrator", "<html><head/><body><p>d<span style=\" vertical-align:sub;\">TX</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class form_calibrator: public Ui_form_calibrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CALIBRATOR_UI_QT_H
