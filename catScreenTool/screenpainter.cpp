#include "screenpainter.h"
#include "ui_screenpainter.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QGuiApplication>
#include <QScreen>
#include <QDebug>


ScreenPainter::ScreenPainter(QWidget *parent)
    : QWidget(parent)
    ,ui(new Ui::ScreenPainter)
{
    ui->setupUi(this);

    this->raise();
    this->move(100, 500);

    _status = screenPainterStatus::cutEnd;

    _canvas = new Canvas(0);

    connect(ui->pushButtonStart, SIGNAL(released()), this, SLOT(slt_screenPainterStart()));
}

ScreenPainter::~ScreenPainter()
{
    delete _canvas;
    delete ui;
}

void ScreenPainter::slt_screenPainterStart()
{
    /*
    QScreen *screen = QGuiApplication::primaryScreen();
    _fullPixmap = screen->grabWindow(0);
    _canvas->setBgPixmap(_fullPixmap);
    */
    _canvas->setGeometry(0, 0, 500, 500);
    _canvas->show();
    qDebug() << "show bg";
}

void ScreenPainter::closeEvent(QCloseEvent *event)
{
    _canvas->close();
    qDebug() << "screenPainter close";
}

void ScreenPainter::keyPressEvent(QKeyEvent *event)
{
    //qDebug() << event;
    qDebug() << event->modifiers();
    switch(event->key())
    {
    case Qt::Key::Key_Escape:
        qDebug() << "Esc";
        _canvas->close();
        break;
    default:
        break;
    }
}

