/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;
    QGridLayout *gridLayout;
    QPushButton *pushButton_9;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_0;
    QPushButton *pushButton_8;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_1;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(368, 451);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setMouseTracking(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 40, 272, 388));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setMinimumSize(QSize(0, 50));
        lcdNumber->setFrameShape(QFrame::Box);
        lcdNumber->setLineWidth(1);
        lcdNumber->setDigitCount(20);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);

        verticalLayout->addWidget(lcdNumber);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setMinimumSize(QSize(80, 80));
        pushButton_9->setMaximumSize(QSize(80, 80));
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/number-nine.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon);
        pushButton_9->setIconSize(QSize(40, 40));

        gridLayout->addWidget(pushButton_9, 3, 2, 1, 1);

        pushButton_clear = new QPushButton(layoutWidget);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setMinimumSize(QSize(80, 80));
        pushButton_clear->setMaximumSize(QSize(80, 80));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        pushButton_clear->setFont(font);
        pushButton_clear->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_clear, 4, 2, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(80, 80));
        pushButton_5->setMaximumSize(QSize(80, 80));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/number-five.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon1);
        pushButton_5->setIconSize(QSize(40, 40));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setMinimumSize(QSize(80, 80));
        pushButton_7->setMaximumSize(QSize(80, 80));
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/number-seven.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon2);
        pushButton_7->setIconSize(QSize(40, 40));

        gridLayout->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(80, 80));
        pushButton_3->setMaximumSize(QSize(80, 80));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/number-three.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(40, 40));

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton_0 = new QPushButton(layoutWidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setMinimumSize(QSize(80, 80));
        pushButton_0->setMaximumSize(QSize(80, 80));
        pushButton_0->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/number-one-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_0->setIcon(icon4);
        pushButton_0->setIconSize(QSize(40, 40));

        gridLayout->addWidget(pushButton_0, 4, 1, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setMinimumSize(QSize(80, 80));
        pushButton_8->setMaximumSize(QSize(80, 80));
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/number-eight.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon5);
        pushButton_8->setIconSize(QSize(40, 40));

        gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_delete = new QPushButton(layoutWidget);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setMinimumSize(QSize(80, 80));
        pushButton_delete->setMaximumSize(QSize(80, 80));
        pushButton_delete->setFont(font);
        pushButton_delete->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_delete->setIconSize(QSize(40, 40));

        gridLayout->addWidget(pushButton_delete, 4, 0, 1, 1);

        pushButton_1 = new QPushButton(layoutWidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setMinimumSize(QSize(80, 80));
        pushButton_1->setMaximumSize(QSize(80, 80));
        pushButton_1->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/number-one.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_1->setIcon(icon6);
        pushButton_1->setIconSize(QSize(40, 40));

        gridLayout->addWidget(pushButton_1, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(80, 80));
        pushButton_4->setMaximumSize(QSize(80, 80));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/number-four.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon7);
        pushButton_4->setIconSize(QSize(40, 40));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(80, 80));
        pushButton_6->setMaximumSize(QSize(80, 80));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/number-six.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon8);
        pushButton_6->setIconSize(QSize(40, 40));

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(80, 80));
        pushButton_2->setMaximumSize(QSize(80, 80));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icons/number-two.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon9);
        pushButton_2->setIconSize(QSize(40, 40));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_9->setText(QString());
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pushButton_5->setText(QString());
        pushButton_7->setText(QString());
        pushButton_3->setText(QString());
        pushButton_0->setText(QString());
        pushButton_8->setText(QString());
        pushButton_delete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        pushButton_1->setText(QString());
        pushButton_4->setText(QString());
        pushButton_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
