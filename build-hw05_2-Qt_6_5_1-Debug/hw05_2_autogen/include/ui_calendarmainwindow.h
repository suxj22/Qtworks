/********************************************************************************
** Form generated from reading UI file 'calendarmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDARMAINWINDOW_H
#define UI_CALENDARMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalendarMainWindow
{
public:
    QAction *setAction;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CalendarMainWindow)
    {
        if (CalendarMainWindow->objectName().isEmpty())
            CalendarMainWindow->setObjectName("CalendarMainWindow");
        CalendarMainWindow->resize(800, 600);
        setAction = new QAction(CalendarMainWindow);
        setAction->setObjectName("setAction");
        setAction->setIconVisibleInMenu(false);
        centralwidget = new QWidget(CalendarMainWindow);
        centralwidget->setObjectName("centralwidget");
        CalendarMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CalendarMainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        CalendarMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CalendarMainWindow);
        statusbar->setObjectName("statusbar");
        CalendarMainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(setAction);

        retranslateUi(CalendarMainWindow);

        QMetaObject::connectSlotsByName(CalendarMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CalendarMainWindow)
    {
        CalendarMainWindow->setWindowTitle(QCoreApplication::translate("CalendarMainWindow", "CalendarMainWindow", nullptr));
        setAction->setText(QCoreApplication::translate("CalendarMainWindow", "\350\256\276\347\275\256\346\227\245\346\234\237", nullptr));
        menu->setTitle(QCoreApplication::translate("CalendarMainWindow", "\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalendarMainWindow: public Ui_CalendarMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDARMAINWINDOW_H
