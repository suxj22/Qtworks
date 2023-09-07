#ifndef SETDATADIALOG_H
#define SETDATADIALOG_H

#include <QDialog>

namespace Ui {
class SetDataDialog;
}

class SetDataDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SetDataDialog(QWidget *parent = nullptr);
    ~SetDataDialog();
    bool isValid();
    bool isLeapYear();

private slots:
    void on_pushButton_clicked();

    void on_yearEdit_textChanged(const QString &arg1);

    void on_monthEdit_textChanged(const QString &arg1);

    void on_dayEdit_textChanged(const QString &arg1);

private:
    Ui::SetDataDialog *ui;
    QString yearText;
    QString monthText;
    QString dayText;
};

#endif // SETDATADIALOG_H
