/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game
{
public:
    QWidget *centralwidget;
    QLabel *TimeCount;
    QLabel *Time;
    QLabel *ScoreCount;
    QLabel *LinePic;
    QLabel *Drumpic1;
    QLabel *Girl1;
    QLabel *Girl2;
    QLabel *Girl3;
    QLabel *label;
    QLabel *Score;
    QLabel *target;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *game)
    {
        if (game->objectName().isEmpty())
            game->setObjectName(QStringLiteral("game"));
        game->resize(512, 404);
        game->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(game);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        TimeCount = new QLabel(centralwidget);
        TimeCount->setObjectName(QStringLiteral("TimeCount"));
        TimeCount->setGeometry(QRect(160, 30, 48, 50));
        QFont font;
        font.setPointSize(26);
        TimeCount->setFont(font);
        Time = new QLabel(centralwidget);
        Time->setObjectName(QStringLiteral("Time"));
        Time->setGeometry(QRect(50, 30, 105, 50));
        Time->setFont(font);
        ScoreCount = new QLabel(centralwidget);
        ScoreCount->setObjectName(QStringLiteral("ScoreCount"));
        ScoreCount->setGeometry(QRect(350, 30, 151, 50));
        LinePic = new QLabel(centralwidget);
        LinePic->setObjectName(QStringLiteral("LinePic"));
        LinePic->setGeometry(QRect(0, 120, 801, 61));
        LinePic->setStyleSheet(QStringLiteral(""));
        LinePic->setPixmap(QPixmap(QString::fromUtf8("Picture/sfieldbg_gogo.png")));
        Drumpic1 = new QLabel(centralwidget);
        Drumpic1->setObjectName(QStringLiteral("Drumpic1"));
        Drumpic1->setGeometry(QRect(-10, 293, 91, 61));
        Girl1 = new QLabel(centralwidget);
        Girl1->setObjectName(QStringLiteral("Girl1"));
        Girl1->setGeometry(QRect(260, 180, 128, 195));
        Girl2 = new QLabel(centralwidget);
        Girl2->setObjectName(QStringLiteral("Girl2"));
        Girl2->setGeometry(QRect(380, 180, 128, 195));
        Girl3 = new QLabel(centralwidget);
        Girl3->setObjectName(QStringLiteral("Girl3"));
        Girl3->setGeometry(QRect(140, 180, 128, 195));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 290, 91, 80));
        Score = new QLabel(centralwidget);
        Score->setObjectName(QStringLiteral("Score"));
        Score->setGeometry(QRect(220, 30, 131, 50));
        Score->setFont(font);
        target = new QLabel(centralwidget);
        target->setObjectName(QStringLiteral("target"));
        target->setGeometry(QRect(25, 110, 71, 81));
        target->setPixmap(QPixmap(QString::fromUtf8(":/Background/dancer/target.png")));
        game->setCentralWidget(centralwidget);
        Time->raise();
        TimeCount->raise();
        Score->raise();
        ScoreCount->raise();
        Girl2->raise();
        Girl1->raise();
        Girl3->raise();
        LinePic->raise();
        label->raise();
        Drumpic1->raise();
        target->raise();
        menubar = new QMenuBar(game);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 512, 25));
        game->setMenuBar(menubar);
        statusbar = new QStatusBar(game);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        game->setStatusBar(statusbar);

        retranslateUi(game);

        QMetaObject::connectSlotsByName(game);
    } // setupUi

    void retranslateUi(QMainWindow *game)
    {
        game->setWindowTitle(QApplication::translate("game", "MainWindow", 0));
        TimeCount->setText(QApplication::translate("game", "<html><head/><body><p><span style=\" color:#000000;\">60</span></p></body></html>", 0));
        Time->setText(QApplication::translate("game", "<html><head/><body><p><span style=\" color:#0000ff;\">Time:</span></p></body></html>", 0));
        ScoreCount->setText(QApplication::translate("game", "<html><head/><body><p><span style=\" font-size:26pt; color:#000000;\">0</span></p></body></html>", 0));
        LinePic->setText(QString());
        Drumpic1->setText(QString());
        Girl1->setText(QString());
        Girl2->setText(QString());
        Girl3->setText(QString());
        label->setText(QString());
        Score->setText(QApplication::translate("game", "<html><head/><body><p><span style=\" font-weight:600; color:#0000ff;\">Score:</span></p></body></html>", 0));
        target->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class game: public Ui_game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
