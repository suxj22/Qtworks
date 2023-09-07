#include "calendarmainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalendarMainWindow w;
    w.show();
    return a.exec();
}
