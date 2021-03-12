#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QList>
#include <QPoint>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>


class Canvas : public QWidget
{
    Q_OBJECT
public:

    explicit Canvas(QWidget *parent = nullptr);

    void reset(void);

signals:

private slots:


private:
    void paintEvent(QPaintEvent *event) override;


    QList<QPoint> pointList;

};

#endif // CANVAS_H
