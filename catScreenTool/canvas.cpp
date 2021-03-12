#include "canvas.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QGuiApplication>
#include <QScreen>
#include <QDebug>

Canvas::Canvas(QWidget *parent) : QWidget(parent)
{
    this->reset();
}

void Canvas::reset()
{
    this->raise();          // 软置顶
    //this->showFullScreen(); // 画布全屏显示
    //this->setGeometry(100, 100, 100, 100);
    this->setStyleSheet("background-color:transparent;"); // 把窗口设置成没有框架大的
    this->setWindowFlags(Qt::FramelessWindowHint); // 背景透明
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    this->setWindowOpacity(0.3); // 所有的东西全都设置为半透明
}


void Canvas::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    QPixmap tmpMask(this->width(), this->height()); // 指定大小

    tmpMask.fill(QColor(0, 0, 0, 160));

    painter.drawPixmap(this->x(), this->y(), tmpMask); // 设置一个灰度图

    QWidget::paintEvent(event);
}
