#ifndef CALENDARMAINWINDOW_H
#define CALENDARMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class CalendarMainWindow; }
QT_END_NAMESPACE

class CalendarMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    CalendarMainWindow(QWidget *parent = nullptr);
    ~CalendarMainWindow();

private:
    Ui::CalendarMainWindow *ui;
};
#endif // CALENDARMAINWINDOW_H
