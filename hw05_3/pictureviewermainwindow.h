#ifndef PICTUREVIEWERMAINWINDOW_H
#define PICTUREVIEWERMAINWINDOW_H
#include <QList>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PictureViewerMainWindow; }
QT_END_NAMESPACE

class PictureViewerMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    PictureViewerMainWindow(QWidget *parent = nullptr);
    ~PictureViewerMainWindow();

private slots:

    void on_pushButton_clicked();

private:
    Ui::PictureViewerMainWindow *ui;
    QList<QString> texts = {"法律图书馆", "工字厅", "甲所、丙所", "近春园", "第六教学楼", "李兆基科技大楼", "美术学院大楼", "清华学堂",
                            "水木清华", "人文社科图书馆", "艺术博物馆", "逸夫图书馆", "综合体育馆"}; // 图片介绍
    QList<QPixmap> images; // 图片的集合，在初始化时更新
    int indexOfImages = 0; // 当前显示的图片的索引
};
#endif // PICTUREVIEWERMAINWINDOW_H
