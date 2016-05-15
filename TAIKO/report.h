#ifndef REPORT_H
#define REPORT_H

#include <QWidget>


namespace Ui {
class report;
}

class report : public QWidget
{
    Q_OBJECT

public:
    explicit report(QWidget *parent = 0);
    void SetScore(int score);
    ~report();
public slots:
    //void EnterGame();

private:
    Ui::report *ui;
    int DisplayScore;


};

#endif // REPORT_H
