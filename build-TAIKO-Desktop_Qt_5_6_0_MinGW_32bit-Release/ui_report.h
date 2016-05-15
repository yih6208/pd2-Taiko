/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_report
{
public:
    QLabel *ScoreLabel;
    QLabel *label;
    QPushButton *exit;
    QPushButton *RestartButton;

    void setupUi(QWidget *report)
    {
        if (report->objectName().isEmpty())
            report->setObjectName(QStringLiteral("report"));
        report->resize(800, 600);
        ScoreLabel = new QLabel(report);
        ScoreLabel->setObjectName(QStringLiteral("ScoreLabel"));
        ScoreLabel->setGeometry(QRect(360, 60, 321, 140));
        QFont font;
        font.setPointSize(48);
        ScoreLabel->setFont(font);
        label = new QLabel(report);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 341, 140));
        QFont font1;
        font1.setPointSize(72);
        label->setFont(font1);
        exit = new QPushButton(report);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(20, 410, 381, 111));
        exit->setFont(font);
        RestartButton = new QPushButton(report);
        RestartButton->setObjectName(QStringLiteral("RestartButton"));
        RestartButton->setGeometry(QRect(420, 420, 381, 101));
        RestartButton->setFont(font);

        retranslateUi(report);
        QObject::connect(exit, SIGNAL(clicked()), report, SLOT(close()));

        QMetaObject::connectSlotsByName(report);
    } // setupUi

    void retranslateUi(QWidget *report)
    {
        report->setWindowTitle(QApplication::translate("report", "Form", 0));
        ScoreLabel->setText(QString());
        label->setText(QApplication::translate("report", "Score:", 0));
        exit->setText(QApplication::translate("report", "Exit", 0));
        RestartButton->setText(QApplication::translate("report", "Restart", 0));
    } // retranslateUi

};

namespace Ui {
    class report: public Ui_report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
