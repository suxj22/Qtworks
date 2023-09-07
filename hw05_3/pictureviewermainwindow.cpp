#include "pictureviewermainwindow.h"
#include "./ui_pictureviewermainwindow.h"
#include <QPixmap>

PictureViewerMainWindow::PictureViewerMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PictureViewerMainWindow)
{
    // 添加图片
    ui->setupUi(this);
    QPixmap fatu(":/images/images/fatu.jpg");
    QPixmap gongziting(":/images/images/gongziting.jpg");
    QPixmap jiasuobingsuo(":/images/images/jiasuobingsuo.jpg");
    QPixmap jinchunyuan(":/images/images/jinchunyuan.jpg");
    QPixmap liujiao(":/images/images/liujiao.jpg");
    QPixmap lizhaoji(":/images/images/lizhaoji.jpg");
    QPixmap meishuxueyuan(":/images/images/meishuxueyuan.jpg");
    QPixmap qinghuaxuetang(":/images/images/qinghuaxuetang.jpg");
    QPixmap shuimuqinghua(":/images/images/shuimuqinghua.png");
    QPixmap wentu(":/images/images/wentu.jpg");
    QPixmap yibo(":/images/images/yibo.jpg");
    QPixmap yifuguan(":/images/images/yifuguan.png");
    QPixmap zonghetiyuguan(":/images/images/zonghetiyuguan.jpg");

    images.push_back(fatu);
    images.push_back(gongziting);
    images.push_back(jiasuobingsuo);
    images.push_back(jinchunyuan);
    images.push_back(liujiao);
    images.push_back(lizhaoji);
    images.push_back(meishuxueyuan);
    images.push_back(qinghuaxuetang);
    images.push_back(shuimuqinghua);
    images.push_back(wentu);
    images.push_back(yibo);
    images.push_back(yifuguan);
    images.push_back(zonghetiyuguan);

    // 初始化时显示第一张图片及其文字介绍
    int buttonWidth = ui->pushButton->width();
    int buttonHeight = ui->pushButton->height();
    QPixmap scaledPixmap = images[indexOfImages].scaled(buttonWidth, buttonHeight, Qt::KeepAspectRatio); // 缩放图片
    ui->pushButton->setIcon(scaledPixmap);
    ui->pushButton->setIconSize(scaledPixmap.size());
    ui->textLabel->setText(texts[indexOfImages]);
}

PictureViewerMainWindow::~PictureViewerMainWindow()
{
    delete ui;
}


void PictureViewerMainWindow::on_pushButton_clicked()
{
    indexOfImages = (indexOfImages + 1) % images.size();
    int buttonWidth = ui->pushButton->width();
    int buttonHeight = ui->pushButton->height();
    QPixmap scaledPixmap = images[indexOfImages].scaled(buttonWidth, buttonHeight, Qt::KeepAspectRatio);
    ui->pushButton->setIcon(scaledPixmap);
    ui->pushButton->setIconSize(scaledPixmap.size());
    ui->textLabel->setText(texts[indexOfImages]);
}

