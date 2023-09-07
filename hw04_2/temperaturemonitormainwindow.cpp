#include "temperaturemonitormainwindow.h"
#include "./ui_temperaturemonitormainwindow.h"

TemperatureMonitorMainWindow::TemperatureMonitorMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TemperatureMonitorMainWindow)
{
    ui->setupUi(this);
}

TemperatureMonitorMainWindow::~TemperatureMonitorMainWindow()
{
    delete ui;
}


void TemperatureMonitorMainWindow::on_dial_celsius_valueChanged(int value)
{
    int tempFahrenheit = 32 + value * 1.8;
    ui->lcdNumber_celsius->display(value);
    ui->dial_fahrenheit->blockSignals(true);
    ui->dial_fahrenheit->setValue(tempFahrenheit);
    ui->dial_fahrenheit->blockSignals(false);
    ui->lcdNumber_fahrenheit->display(tempFahrenheit);
}


void TemperatureMonitorMainWindow::on_dial_fahrenheit_valueChanged(int value)
{
    int tempCelsius = (5.0 / 9.0) * (value - 32);
    ui->lcdNumber_fahrenheit->display(value);
    ui->dial_celsius->blockSignals(true);
    ui->dial_celsius->setValue(tempCelsius);
    ui->dial_celsius->blockSignals(false);
    ui->lcdNumber_celsius->display(tempCelsius);
}

