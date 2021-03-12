#ifndef SCREENPAINTER_H
#define SCREENPAINTER_H

#include <QWidget>
#include <QRect>
#include "canvas.h"
#include <QPixmap>
#include <QCloseEvent>
#include <QKeyEvent>


QT_BEGIN_NAMESPACE
namespace Ui {
class ScreenPainter;
}
QT_END_NAMESPACE

enum screenPainterStatus {cutBegin, cutEnd};

class ScreenPainter : public QWidget
{
    Q_OBJECT
public:
    explicit ScreenPainter(QWidget *parent = nullptr);
    ~ScreenPainter();

signals:

private slots:
    void slt_screenPainterStart(void);

private:
    Ui::ScreenPainter *ui;

    int _wndWidth;
    int _wndHeight;
    int _wndX;
    int _wndY;


    Canvas *_canvas;
    QPixmap _fullPixmap;

    screenPainterStatus _status;

    void closeEvent(QCloseEvent *event);
    void keyPressEvent(QKeyEvent *event);

};

#endif // SCREENPAINTER_H
