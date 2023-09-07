#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lcdNumber->display(numberToShow);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_4_clicked()
{
    numberToShow += "4";
    ui->lcdNumber->display(numberToShow);
}


void MainWindow::on_pushButton_5_clicked()
{
    numberToShow += "5";
    ui->lcdNumber->display(numberToShow);
}

void MainWindow::on_pushButton_6_clicked()
{
    numberToShow += "6";
    ui->lcdNumber->display(numberToShow);
}

void MainWindow::on_pushButton_7_clicked()
{
    numberToShow += "7";
    ui->lcdNumber->display(numberToShow);
}

void MainWindow::on_pushButton_8_clicked()
{
    numberToShow += "8";
    ui->lcdNumber->display(numberToShow);
}

void MainWindow::on_pushButton_9_clicked()
{
    numberToShow += "9";
    ui->lcdNumber->display(numberToShow);
}

void MainWindow::on_pushButton_0_clicked()
{
    numberToShow += "0";
    ui->lcdNumber->display(numberToShow);
}

void MainWindow::on_pushButton_clear_clicked()
{
    numberToShow.clear();
    ui->lcdNumber->display(numberToShow);
}

void MainWindow::on_pushButton_delete_clicked()
{
    numberToShow.chop(1);
    ui->lcdNumber->display(numberToShow);
}

void MainWindow::on_pushButton_1_clicked()
{
    numberToShow += "1";
    ui->lcdNumber->display(numberToShow);
}


void MainWindow::on_pushButton_2_clicked()
{
    numberToShow += "2";
    ui->lcdNumber->display(numberToShow);
}


void MainWindow::on_pushButton_3_clicked()
{
    numberToShow += "3";
    ui->lcdNumber->display(numberToShow);
}

