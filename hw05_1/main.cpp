#include "texteditormainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TextEditorMainWindow w;
    w.show();
    return a.exec();
}
