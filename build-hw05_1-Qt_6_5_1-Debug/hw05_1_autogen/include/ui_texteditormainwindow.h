/********************************************************************************
** Form generated from reading UI file 'texteditormainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDITORMAINWINDOW_H
#define UI_TEXTEDITORMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextEditorMainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *InputTextEdit;
    QTextEdit *ShowTextEdit;
    QLabel *label;
    QMenuBar *menubar;

    void setupUi(QMainWindow *TextEditorMainWindow)
    {
        if (TextEditorMainWindow->objectName().isEmpty())
            TextEditorMainWindow->setObjectName("TextEditorMainWindow");
        TextEditorMainWindow->resize(800, 600);
        centralwidget = new QWidget(TextEditorMainWindow);
        centralwidget->setObjectName("centralwidget");
        InputTextEdit = new QTextEdit(centralwidget);
        InputTextEdit->setObjectName("InputTextEdit");
        InputTextEdit->setGeometry(QRect(430, 200, 271, 41));
        QFont font;
        font.setPointSize(19);
        InputTextEdit->setFont(font);
        ShowTextEdit = new QTextEdit(centralwidget);
        ShowTextEdit->setObjectName("ShowTextEdit");
        ShowTextEdit->setGeometry(QRect(40, 40, 331, 461));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(430, 110, 271, 81));
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        TextEditorMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TextEditorMainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        TextEditorMainWindow->setMenuBar(menubar);

        retranslateUi(TextEditorMainWindow);

        QMetaObject::connectSlotsByName(TextEditorMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TextEditorMainWindow)
    {
        TextEditorMainWindow->setWindowTitle(QCoreApplication::translate("TextEditorMainWindow", "TextEditorMainWindow", nullptr));
        label->setText(QCoreApplication::translate("TextEditorMainWindow", "\350\257\267\345\234\250\345\217\263\350\276\271\347\232\204\346\226\271\346\241\206\344\270\255\350\276\223\345\205\245\346\226\207\345\255\227\357\274\214\346\214\211\n"
"\345\233\236\350\275\246\351\224\256\347\241\256\350\256\244\357\274\214\346\226\207\345\255\227\345\260\206\346\267\273\345\212\240\345\210\260\345\267\246\350\276\271\n"
"\347\232\204\346\226\271\346\241\206\344\270\255\343\200\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextEditorMainWindow: public Ui_TextEditorMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDITORMAINWINDOW_H
