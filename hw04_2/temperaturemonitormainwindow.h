#ifndef TEMPERATUREMONITORMAINWINDOW_H
#define TEMPERATUREMONITORMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TemperatureMonitorMainWindow; }
QT_END_NAMESPACE

class TemperatureMonitorMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    TemperatureMonitorMainWindow(QWidget *parent = nullptr);
    ~TemperatureMonitorMainWindow();

private slots:
    void on_dial_celsius_valueChanged(int value);

    void on_dial_fahrenheit_valueChanged(int value);

private:
    Ui::TemperatureMonitorMainWindow *ui;
};


#endif // TEMPERATUREMONITORMAINWINDOW_H
