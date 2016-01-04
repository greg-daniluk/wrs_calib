/********************************************************************************
** Form generated from reading UI file 'fiber_alpha.ui'
**
** Created: Sun Mar 9 21:39:13 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef FIBER_ALPHA_UI_QT_H
#define FIBER_ALPHA_UI_QT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_form_alpha
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *combo_selfiber;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_4;
    QPushButton *but_calculate;
    QLineEdit *alpha;
    QLineEdit *alphan;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *offsetpps2;
    QLabel *label_9;
    QPushButton *but_getdata2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *but_getdata1;
    QLineEdit *offsetpps1;
    QLabel *label_6;

    void setupUi(QWidget *form_alpha)
    {
        if (form_alpha->objectName().isEmpty())
            form_alpha->setObjectName(QString::fromUtf8("form_alpha"));
        form_alpha->resize(337, 405);
        groupBox = new QGroupBox(form_alpha);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 301, 63));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        combo_selfiber = new QComboBox(groupBox);
        combo_selfiber->setObjectName(QString::fromUtf8("combo_selfiber"));

        gridLayout->addWidget(combo_selfiber, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(form_alpha);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 250, 301, 141));
        gridLayoutWidget = new QWidget(groupBox_3);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 281, 101));
        gridLayout_4 = new QGridLayout(gridLayoutWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        but_calculate = new QPushButton(gridLayoutWidget);
        but_calculate->setObjectName(QString::fromUtf8("but_calculate"));

        gridLayout_4->addWidget(but_calculate, 3, 0, 1, 1);

        alpha = new QLineEdit(gridLayoutWidget);
        alpha->setObjectName(QString::fromUtf8("alpha"));
        alpha->setReadOnly(true);

        gridLayout_4->addWidget(alpha, 1, 0, 1, 1);

        alphan = new QLineEdit(gridLayoutWidget);
        alphan->setObjectName(QString::fromUtf8("alphan"));
        alphan->setReadOnly(true);

        gridLayout_4->addWidget(alphan, 1, 2, 1, 1);

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

        groupBox_2 = new QGroupBox(form_alpha);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 90, 311, 141));
        gridLayoutWidget_2 = new QWidget(groupBox_2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 30, 281, 111));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        offsetpps2 = new QLineEdit(gridLayoutWidget_2);
        offsetpps2->setObjectName(QString::fromUtf8("offsetpps2"));

        gridLayout_2->addWidget(offsetpps2, 4, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 3, 0, 1, 1);

        but_getdata2 = new QPushButton(gridLayoutWidget_2);
        but_getdata2->setObjectName(QString::fromUtf8("but_getdata2"));

        gridLayout_2->addWidget(but_getdata2, 4, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 1, 1, 1);

        but_getdata1 = new QPushButton(gridLayoutWidget_2);
        but_getdata1->setObjectName(QString::fromUtf8("but_getdata1"));

        gridLayout_2->addWidget(but_getdata1, 2, 2, 1, 1);

        offsetpps1 = new QLineEdit(gridLayoutWidget_2);
        offsetpps1->setObjectName(QString::fromUtf8("offsetpps1"));

        gridLayout_2->addWidget(offsetpps1, 2, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);


        retranslateUi(form_alpha);

        QMetaObject::connectSlotsByName(form_alpha);
    } // setupUi

    void retranslateUi(QWidget *form_alpha)
    {
        form_alpha->setWindowTitle(QApplication::translate("form_alpha", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("form_alpha", "Select used fiber", 0, QApplication::UnicodeUTF8));
        combo_selfiber->clear();
        combo_selfiber->insertItems(0, QStringList()
         << QApplication::translate("form_alpha", "measure fiber first", 0, QApplication::UnicodeUTF8)
        );
        groupBox_3->setTitle(QApplication::translate("form_alpha", "Result", 0, QApplication::UnicodeUTF8));
        but_calculate->setText(QApplication::translate("form_alpha", "Calculate", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("form_alpha", "<html><head/><body><p>alpha<span style=\" vertical-align:sub;\">N</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("form_alpha", "<html><head/><body><p>alpha (x 10<span style=\" vertical-align:super;\">-4</span>)</p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("form_alpha", "Slave Device", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("form_alpha", "<html><head/><body><p>offset<span style=\" vertical-align:sub;\">PPS2</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        but_getdata2->setText(QApplication::translate("form_alpha", "get data", 0, QApplication::UnicodeUTF8));
        but_getdata1->setText(QApplication::translate("form_alpha", "get data", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("form_alpha", "<html><head/><body><p>offset<span style=\" vertical-align:sub;\">PPS1</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class form_alpha: public Ui_form_alpha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // FIBER_ALPHA_UI_QT_H
