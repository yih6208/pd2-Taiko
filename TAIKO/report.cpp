#include "report.h"
#include "ui_report.h"

report::report(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::report)
{
    ui->setupUi(this);
    this->setStyleSheet("#report{border-image:url(../TAIKO/Picture/BackGround.jpg);}" );

    //connect(ui-RestartButton,SIGNAL(released()),this,SLOT(EnterGame()));


}

report::~report()
{
    delete ui;
}
void report::SetScore(int score){
    DisplayScore=score;
    ui->ScoreLabel->setText(QString::number(DisplayScore));
}
/*
void report::EnterGame(){
    this->close();
    g.setObjectName("game");
    g.show();
    g.start();
}
*/
