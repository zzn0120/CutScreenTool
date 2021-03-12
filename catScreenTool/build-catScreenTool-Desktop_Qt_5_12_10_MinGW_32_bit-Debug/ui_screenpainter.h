/********************************************************************************
** Form generated from reading UI file 'screenpainter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENPAINTER_H
#define UI_SCREENPAINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenPainter
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBoxScreenShot;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonStart;

    void setupUi(QWidget *ScreenPainter)
    {
        if (ScreenPainter->objectName().isEmpty())
            ScreenPainter->setObjectName(QString::fromUtf8("ScreenPainter"));
        ScreenPainter->resize(205, 73);
        gridLayout = new QGridLayout(ScreenPainter);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBoxScreenShot = new QGroupBox(ScreenPainter);
        groupBoxScreenShot->setObjectName(QString::fromUtf8("groupBoxScreenShot"));
        gridLayout_2 = new QGridLayout(groupBoxScreenShot);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButtonStart = new QPushButton(groupBoxScreenShot);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));

        gridLayout_2->addWidget(pushButtonStart, 0, 0, 1, 1);


        gridLayout->addWidget(groupBoxScreenShot, 0, 0, 1, 1);


        retranslateUi(ScreenPainter);

        QMetaObject::connectSlotsByName(ScreenPainter);
    } // setupUi

    void retranslateUi(QWidget *ScreenPainter)
    {
        ScreenPainter->setWindowTitle(QApplication::translate("ScreenPainter", "ScreenPainter", nullptr));
        groupBoxScreenShot->setTitle(QApplication::translate("ScreenPainter", "ScreenShot", nullptr));
        pushButtonStart->setText(QApplication::translate("ScreenPainter", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScreenPainter: public Ui_ScreenPainter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENPAINTER_H
