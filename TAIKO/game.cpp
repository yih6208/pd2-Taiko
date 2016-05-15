#include "game.h"
#include "mainwindow.h"
#include "ui_game.h"
#include <time.h>
game::game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    this->setStyleSheet("#game {border-image:url(../TAIKO/Picture/bg.png);}" );
    ui->label->setPixmap(QPixmap("../TAIKO/Picture/Drum.png"));

    //ui->target->setPixmap(QPixmap("../TAIKO/Picture/target.png"));
    //ui->target->setText("123456");

    ui->LinePic->setPixmap(QPixmap("../TAIKO/Picture/sfieldbg_gogo.png"));
    /*********Timer Setup*****************/
    timer = new QTimer(this);
    DrumTime= new QTimer(this);
    MoveTime= new QTimer(this);
    SendTime= new QTimer(this);

    connect(DrumTime, SIGNAL(timeout()), this, SLOT(ClearDrum()));
    connect(timer, SIGNAL(timeout()), this, SLOT(CountDown()));
    connect(MoveTime, SIGNAL(timeout()), this, SLOT(MoveLabel()));
    connect(SendTime, SIGNAL(timeout()), this, SLOT(SendLabel()));

    /************Girl Animation***********/
    girl1= new QMovie("../TAIKO/Picture/girl.gif");
    ui->Girl1->setMovie(girl1);
    girl1->start();

    girl2= new QMovie("../TAIKO/Picture/girl2.gif");
    ui->Girl2->setMovie(girl2);
    girl2->start();

    girl3= new QMovie("../TAIKO/Picture/girl3.gif");
    ui->Girl3->setMovie(girl3);
    girl3->start();

    for(int i=0;i<20;i++){
        BeatPoint[i]= new Beat;
        BeatPoint[i]->BeatLabel=new QLabel(this);
        BeatPoint[i]->BeatLabel->setGeometry(512,0,100,100);
        BeatPoint[i]->BeatLabel->setPixmap(QPixmap("../TAIKO/Picture/blue_small.png"));
        BeatPoint[i]->BeatPointX=512;
     }
}
game::~game()
{
    delete ui;
}

void game::SendLabel(){
    int select=rand()%20;
    BeatPoint[select]->enable=true;

    if(select%2==0){
        BeatPoint[select]->BeatLabel->setPixmap(QPixmap("../TAIKO/Picture/red_small.png"));
        BeatPoint[select]->color=RED;
    }
    else{
        BeatPoint[select]->BeatLabel->setPixmap(QPixmap("../TAIKO/Picture/blue_small.png"));
        BeatPoint[select]->color=BLUE;
    }
    SendTime->start((rand()%10+1)*120);
}

void game::MoveLabel(){
    
    for(int i=0;i<20;i++){
        if(BeatPoint[i]->enable==true){
            if(BeatPoint[i]->BeatPointX>-20){
                BeatPoint[i]->BeatLabel->setGeometry(BeatPoint[i]->BeatPointX--,97,100,100);
            }
            else{
                BeatPoint[i]->BeatPointX=512;
                BeatPoint[i]->BeatLabel->setGeometry(BeatPoint[i]->BeatPointX,97,100,100);
                BeatPoint[i]->enable=false;
            }
         }
    }
}

void game::start(){
    srand(time(NULL));
    timer->start(1000);
    MoveTime->start(4);
    SendTime->start(5);
}
void game::ClearDrum(){
    ui->Drumpic1->setText("   ");
}

void game::keyPressEvent(QKeyEvent *event){
    if(event->key()==Qt::Key_F) {
        ui->Drumpic1->setPixmap(QPixmap("../TAIKO/Picture/mtaikoflash_blue.png"));
        DrumTime->start(130);
        DrumDectect(BLUE);

    }
    if(event->key()==Qt::Key_J) {
        ui->Drumpic1->setPixmap(QPixmap("../TAIKO/Picture/mtaikoflash_red.png"));
        DrumTime->start(130);
        DrumDectect(RED);
    }

    if(event->key()==Qt::Key_R) {

        ui->TimeCount->setText("60");
        timer->start(1000);
        clock=60;
        score=0;
        ui->ScoreCount->setText(QString::number(score));


    }
}

void game::DrumDectect(int color){
    int current,min=450;
    

    for(int i=0;i<20;i++){
       if(BeatPoint[i]->enable==true){
            if( abs(BeatPoint[i]->BeatPointX-30)<min){
           min=BeatPoint[i]->BeatPointX-30;
           current=i;
            }
       }
    }
    if(BeatPoint[current]->color==color){
        if(abs(BeatPoint[current]->BeatPointX-30)<50){
            BeatPoint[current]->BeatLabel->setText("  ");
            BeatPoint[current]->enable=false;
            if(abs(BeatPoint[current]->BeatPointX-30)<40) score+=100;
            else  score+=60;
            BeatPoint[current]->BeatPointX=512;
        }
    }
    ui->ScoreCount->setText(QString::number(score));
    QFont font=ui->ScoreCount->font();
    font.setPointSize(28);
    ui->ScoreCount->setFont(font);
    


}



void game::CountDown()
{
    clock--;
    ui->TimeCount->setText(QString::number(clock));

    if(clock==0){
        this->close();
        End.setObjectName("report");
        End.show();
        End.SetScore(score);
    }
}
