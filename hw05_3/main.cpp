#include "pictureviewermainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PictureViewerMainWindow w;
    w.show();
    return a.exec();
}
