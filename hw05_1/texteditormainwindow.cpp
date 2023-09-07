#include "texteditormainwindow.h"
#include "./ui_texteditormainwindow.h"
#include <QKeyEvent>

TextEditorMainWindow::TextEditorMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TextEditorMainWindow)
{
    ui->setupUi(this);

    // 安装事件过滤器
    ui->InputTextEdit->installEventFilter(this);
}

bool TextEditorMainWindow::eventFilter(QObject *obj, QEvent *event){
    if (obj == ui->InputTextEdit && event->type() == QEvent::KeyPress){ //检测是否为InputTextEdit的事件且事件类型为按键事件
        QKeyEvent *keyEvent = dynamic_cast<QKeyEvent *> (event); // 如果是则创建QKeyEvent的实例对象并进行接下来的判断
        if (keyEvent && keyEvent->key() == Qt::Key_Return){
            QString textOfInput = ui->InputTextEdit->toPlainText();
            QString textShowing = ui->ShowTextEdit->toPlainText();
            ui->InputTextEdit->clear();
            ui->ShowTextEdit->setPlainText(textShowing + "\n" + textOfInput);
            return true;
        }
        else {
            return QMainWindow::eventFilter(obj, event);
        }
    }
    return QMainWindow::eventFilter(obj, event);
}

TextEditorMainWindow::~TextEditorMainWindow()
{
    delete ui;
}

