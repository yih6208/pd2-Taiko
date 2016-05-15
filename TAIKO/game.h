#ifndef GAME_H
#define GAME_H
#include <QKeyEvent>
#include <QMainWindow>
#include "QKeyEvent"
#include "QTimer"
#include <QMovie>
#include "stdio.h"
#include "report.h"
#include <math.h>
#include <QLabel>
#define BLUE 0
#define RED 1
namespace Ui {
class game;
}

class game : public QMainWindow
{
    Q_OBJECT

public:
    explicit game(QWidget *parent = 0);
    ~game();
    void start();
    void keyPressEvent(QKeyEvent *event);

private slots:
    void CountDown();
    void ClearDrum();
    void MoveLabel();
    void SendLabel();
private:
    Ui::game *ui;
    QTimer *timer,*DrumTime,*MoveTime,*SendTime;

    void DrumDectect(int color);
    void ScoreCounter(int sel);
    QMovie *girl1,*girl2,*girl3;

    class Beat{
        public:
          QLabel *BeatLabel;
          bool enable=false;
          int BeatPointX;
          int color;
    } *BeatPoint[20];
    short clock=60;
    int score=0;
    report End;




};

#endif // GAME_H
