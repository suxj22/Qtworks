/********************************************************************************
** Form generated from reading UI file 'pictureviewermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTUREVIEWERMAINWINDOW_H
#define UI_PICTUREVIEWERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PictureViewerMainWindow
{
public:
    QWidget *centralwidget;
    QLabel *textLabel;
    QLabel *titleLabel;
    QPushButton *pushButton;
    QMenuBar *menubar;

    void setupUi(QMainWindow *PictureViewerMainWindow)
    {
        if (PictureViewerMainWindow->objectName().isEmpty())
            PictureViewerMainWindow->setObjectName("PictureViewerMainWindow");
        PictureViewerMainWindow->resize(1038, 622);
        centralwidget = new QWidget(PictureViewerMainWindow);
        centralwidget->setObjectName("centralwidget");
        textLabel = new QLabel(centralwidget);
        textLabel->setObjectName("textLabel");
        textLabel->setGeometry(QRect(40, 530, 101, 41));
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(440, 0, 141, 61));
        QFont font;
        font.setPointSize(30);
        titleLabel->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 70, 960, 450));
        PictureViewerMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PictureViewerMainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1038, 24));
        PictureViewerMainWindow->setMenuBar(menubar);

        retranslateUi(PictureViewerMainWindow);

        QMetaObject::connectSlotsByName(PictureViewerMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PictureViewerMainWindow)
    {
        PictureViewerMainWindow->setWindowTitle(QCoreApplication::translate("PictureViewerMainWindow", "PictureViewerMainWindow", nullptr));
        textLabel->setText(QCoreApplication::translate("PictureViewerMainWindow", "TextLabel", nullptr));
        titleLabel->setText(QCoreApplication::translate("PictureViewerMainWindow", "\346\270\205\345\215\216\351\243\216\345\205\211", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PictureViewerMainWindow: public Ui_PictureViewerMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTUREVIEWERMAINWINDOW_H
