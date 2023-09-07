#include "setdatadialog.h"
#include "ui_setdatadialog.h"
#include <QMessageBox>
#include <QRegularExpressionValidator>

SetDataDialog::SetDataDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetDataDialog)
{
    ui->setupUi(this);

    // 设置检测器，保证年份和月份输入的合法性
    QRegularExpression regExpOfYear("^[1-9][0-9]*$");
    QRegularExpression regExpOfMonth("^(1[0-2]|[1-9])$");
    QRegularExpressionValidator *validatorOfYear = new QRegularExpressionValidator(regExpOfYear, this);
    ui->yearEdit->setValidator(validatorOfYear);
    QRegularExpressionValidator *validatorOfMonth = new QRegularExpressionValidator(regExpOfMonth, this);
    ui->monthEdit->setValidator(validatorOfMonth);
}

SetDataDialog::~SetDataDialog()
{
    delete ui;
}

// 设置完成，判断日期是否合法，若合法则显示设置结果
void SetDataDialog::on_pushButton_clicked()
{

    if(isValid()) {
        this->close();
        QString stringToShow = "日期已设置为" + yearText + "年" + monthText + "月" + dayText + "日";
        QMessageBox::information(this, "日期结果", stringToShow);
    }

}

// 判断是否为闰年
bool SetDataDialog::isLeapYear(){
    int year = yearText.toInt();
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    }
    else {
        return false;
    }
}

// 判断日期输入的合法性并给出相应提示
bool SetDataDialog::isValid(){

    int month = monthText.toInt();
    int year = yearText.toInt();
    if (month == 0 || year == 0){
        QMessageBox::warning(this, "格式错误", "年份或月份为空");
        ui->dayEdit->clear();
        return false;
    }
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
        QRegularExpression regExpOf31DaysMonth("^(1[0-9]|2[0-9]|3[0-1]|[1-9])$");
        QRegularExpressionMatch matchOf31 = regExpOf31DaysMonth.match(dayText);
        if (!matchOf31.hasMatch()){
            QMessageBox::warning(this, "格式错误", "日期应为1-31之间的正整数");
            ui->dayEdit->clear();
            return false;
        }
        return true;
        break;
    }
    case 4: case 6: case 9: case 11: {
        QRegularExpression regExpOf30DaysMonth("^(1[0-9]|2[0-9]|30|[1-9])$");
        QRegularExpressionMatch matchOf30 = regExpOf30DaysMonth.match(dayText);
        if (!matchOf30.hasMatch()){
            QMessageBox::warning(this, "格式错误", "日期应为1-30之间的正整数");
            ui->dayEdit->clear();
            return false;
        }
        return true;
        break;
    }
    case 2: {
        if (isLeapYear()){
            QRegularExpression regExpOf29DaysMonth("^([12][0-9]|[1-9])$");
            QRegularExpressionMatch matchOf29 = regExpOf29DaysMonth.match(dayText);
            if(!matchOf29.hasMatch()){
                QMessageBox::warning(this, "格式错误", "日期应为1-29之间的正整数");
                ui->dayEdit->clear();
                return false;
            }
            return true;
        }
        else {
            QRegularExpression regExpOf28DaysMonth("^(2[0-8]|1[0-9]|[1-9])$");
            QRegularExpressionMatch matchOf28 = regExpOf28DaysMonth.match(dayText);
            if(!matchOf28.hasMatch()){
                QMessageBox::warning(this, "格式错误", "日期应为1-28之间的正整数");
                ui->dayEdit->clear();
                return false;
            }
            return true;
        }
        break;
    }
    default:
        return false;
        break;
    }
}


// 记录输入值
void SetDataDialog::on_yearEdit_textChanged(const QString &arg1)
{
    yearText = arg1;
}


void SetDataDialog::on_monthEdit_textChanged(const QString &arg1)
{
    monthText = arg1;
}


void SetDataDialog::on_dayEdit_textChanged(const QString &arg1)
{
    dayText = arg1;
}

