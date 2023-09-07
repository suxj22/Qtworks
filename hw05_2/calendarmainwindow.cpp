#include "calendarmainwindow.h"
#include "./ui_calendarmainwindow.h"
#include "QtWidgets/qdialog.h"
#include "setdatadialog.h"

CalendarMainWindow::CalendarMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CalendarMainWindow)
{
    ui->setupUi(this);
    QAction *set = ui->setAction;
    SetDataDialog *setDialog = new SetDataDialog;

    // 菜单弹出设置日期按钮
    connect(set, &QAction::triggered, setDialog, &QDialog::exec);
}

CalendarMainWindow::~CalendarMainWindow()
{
    delete ui;
}


