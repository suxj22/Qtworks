/********************************************************************************
** Form generated from reading UI file 'setdatadialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETDATADIALOG_H
#define UI_SETDATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SetDataDialog
{
public:
    QLabel *label;
    QLineEdit *yearEdit;
    QLabel *label_2;
    QLineEdit *monthEdit;
    QLabel *label_3;
    QLineEdit *dayEdit;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *SetDataDialog)
    {
        if (SetDataDialog->objectName().isEmpty())
            SetDataDialog->setObjectName("SetDataDialog");
        SetDataDialog->resize(439, 208);
        label = new QLabel(SetDataDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 131, 21));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        yearEdit = new QLineEdit(SetDataDialog);
        yearEdit->setObjectName("yearEdit");
        yearEdit->setGeometry(QRect(10, 80, 71, 31));
        label_2 = new QLabel(SetDataDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 80, 58, 31));
        monthEdit = new QLineEdit(SetDataDialog);
        monthEdit->setObjectName("monthEdit");
        monthEdit->setGeometry(QRect(160, 80, 71, 31));
        label_3 = new QLabel(SetDataDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(240, 80, 58, 31));
        dayEdit = new QLineEdit(SetDataDialog);
        dayEdit->setObjectName("dayEdit");
        dayEdit->setGeometry(QRect(310, 80, 71, 31));
        label_4 = new QLabel(SetDataDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(390, 80, 58, 31));
        pushButton = new QPushButton(SetDataDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 160, 100, 32));

        retranslateUi(SetDataDialog);

        QMetaObject::connectSlotsByName(SetDataDialog);
    } // setupUi

    void retranslateUi(QDialog *SetDataDialog)
    {
        SetDataDialog->setWindowTitle(QCoreApplication::translate("SetDataDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SetDataDialog", "\350\257\267\350\256\276\347\275\256\346\227\245\346\234\237\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("SetDataDialog", "\345\271\264", nullptr));
        label_3->setText(QCoreApplication::translate("SetDataDialog", "\346\234\210", nullptr));
        label_4->setText(QCoreApplication::translate("SetDataDialog", "\346\227\245", nullptr));
        pushButton->setText(QCoreApplication::translate("SetDataDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetDataDialog: public Ui_SetDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETDATADIALOG_H
