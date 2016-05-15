#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    /**********button Setting************/
    connect(ui->StartButton,SIGNAL(released()),this,SLOT(EnterGame()));
    connect(ui->ExitButton,SIGNAL(released()),this,SLOT(ExitGame()));

    /****UI Setting*******/
    this->setStyleSheet("#mainWindow {border-image:url(../TAIKO/Picture/BackGround.jpg);}" );
    ui->ExitButton->setFlat(true);
    ui->StartButton->setFlat(true);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::EnterGame(){
    this->close();
    g.setObjectName("game");
    g.show();
    g.start();
}

void MainWindow::ExitGame(){
    this->close();
}
