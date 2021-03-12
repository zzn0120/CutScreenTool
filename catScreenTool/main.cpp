#include "screenpainter.h"
#include "canvas.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ScreenPainter sp;
    sp.show();


    return a.exec();
}
