#include "temperaturemonitormainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TemperatureMonitorMainWindow w;
    w.show();
    return a.exec();
}
