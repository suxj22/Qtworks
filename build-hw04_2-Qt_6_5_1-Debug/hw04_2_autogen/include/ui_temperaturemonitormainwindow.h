/********************************************************************************
** Form generated from reading UI file 'temperaturemonitormainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPERATUREMONITORMAINWINDOW_H
#define UI_TEMPERATUREMONITORMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TemperatureMonitorMainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QDial *dial_celsius;
    QLCDNumber *lcdNumber_celsius;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QDial *dial_fahrenheit;
    QLCDNumber *lcdNumber_fahrenheit;

    void setupUi(QMainWindow *TemperatureMonitorMainWindow)
    {
        if (TemperatureMonitorMainWindow->objectName().isEmpty())
            TemperatureMonitorMainWindow->setObjectName("TemperatureMonitorMainWindow");
        TemperatureMonitorMainWindow->resize(713, 463);
        centralwidget = new QWidget(TemperatureMonitorMainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 50, 301, 361));
        QFont font;
        font.setPointSize(15);
        groupBox->setFont(font);
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 40, 202, 281));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dial_celsius = new QDial(widget);
        dial_celsius->setObjectName("dial_celsius");
        dial_celsius->setMinimumSize(QSize(200, 200));
        dial_celsius->setCursor(QCursor(Qt::OpenHandCursor));
        dial_celsius->setMinimum(-50);
        dial_celsius->setMaximum(100);
        dial_celsius->setNotchTarget(1.000000000000000);
        dial_celsius->setNotchesVisible(true);

        verticalLayout->addWidget(dial_celsius);

        lcdNumber_celsius = new QLCDNumber(widget);
        lcdNumber_celsius->setObjectName("lcdNumber_celsius");

        verticalLayout->addWidget(lcdNumber_celsius);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(380, 50, 301, 361));
        groupBox_2->setFont(font);
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 40, 202, 281));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        dial_fahrenheit = new QDial(layoutWidget);
        dial_fahrenheit->setObjectName("dial_fahrenheit");
        dial_fahrenheit->setMinimumSize(QSize(200, 200));
        dial_fahrenheit->setCursor(QCursor(Qt::OpenHandCursor));
        dial_fahrenheit->setMinimum(-58);
        dial_fahrenheit->setMaximum(212);
        dial_fahrenheit->setValue(32);
        dial_fahrenheit->setWrapping(false);
        dial_fahrenheit->setNotchTarget(1.000000000000000);
        dial_fahrenheit->setNotchesVisible(true);

        verticalLayout_2->addWidget(dial_fahrenheit);

        lcdNumber_fahrenheit = new QLCDNumber(layoutWidget);
        lcdNumber_fahrenheit->setObjectName("lcdNumber_fahrenheit");
        lcdNumber_fahrenheit->setProperty("intValue", QVariant(32));

        verticalLayout_2->addWidget(lcdNumber_fahrenheit);

        TemperatureMonitorMainWindow->setCentralWidget(centralwidget);

        retranslateUi(TemperatureMonitorMainWindow);

        QMetaObject::connectSlotsByName(TemperatureMonitorMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TemperatureMonitorMainWindow)
    {
        TemperatureMonitorMainWindow->setWindowTitle(QCoreApplication::translate("TemperatureMonitorMainWindow", "TemperatureMonitorMainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TemperatureMonitorMainWindow", "\346\221\204\346\260\217\346\270\251\345\272\246\357\274\210-50\342\204\203 ~ 100\342\204\203\357\274\211", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TemperatureMonitorMainWindow", "\345\215\216\346\260\217\346\270\251\345\272\246\357\274\210-58\342\204\211 ~ 212\342\204\211\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TemperatureMonitorMainWindow: public Ui_TemperatureMonitorMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPERATUREMONITORMAINWINDOW_H
