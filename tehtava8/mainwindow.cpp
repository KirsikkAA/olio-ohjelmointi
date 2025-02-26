#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->gameText->setText("Select playtime and press GAME");
}

MainWindow::~MainWindow()
{
    if(timer){
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
}

void MainWindow::on_startGame_clicked()
{
    p1Time = gameTime;
    p2Time = gameTime;
    currentPlayer = 1;

    // ui:n alustukset
    ui->progressBar_1-> setRange(0, gameTime);
    ui->progressBar_2-> setRange(0, gameTime);
    ui->progressBar_1 -> setValue(gameTime);
    ui->progressBar_2 -> setValue(gameTime);

    //käynnistetään ajastin
    timer = new QTimer(this);

    connect(timer,
        &QTimer::timeout,
        this,
        &MainWindow::updateProgressBar);

    timer->setInterval(1000);
    timer->start();

    qDebug() << "Peli aloitettiin ajalla" << gameTime;

     if (gameTime <= 0){
        qDebug() << "Virhe! Et antanut pelille aikaa";
        ui->gameText->setText("No playtime >:( press END GAME");
        return;
    }
    ui->gameText->setText("Game ongoing");
}

void MainWindow::on_stopGame_clicked()
{
    ui->progressBar_1->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);
    timer->stop();
    delete timer;
    timer = nullptr;
    gameTime = 0;
    qDebug() << "Peli lopetettiin";
    ui->gameText->setText("New game via playtime + START");
}

void MainWindow::updateProgressBar()
{
    if(currentPlayer == 1){
        p1Time--;
        ui->progressBar_1->setValue(p1Time);
        if(p1Time == 0){
            timer->stop();
            delete timer;
            timer = nullptr;
            qDebug() << "Player 1 havisi - aika loppui";
            ui->gameText->setText("PLAYER 2 WON!!");
        }
    }
    if(currentPlayer==2){
        p2Time--;
        ui->progressBar_2->setValue(p2Time);
        if(p2Time == 0){
            timer->stop();
            delete timer;
            timer = nullptr;
            qDebug() << "Player 2 havisi - aika loppui";
            ui->gameText->setText("PLAYER 1 WON!!");
        }
    }
}

void MainWindow::on_p1end_clicked()
{
    currentPlayer = 2;
    qDebug() << "Pelaaja on nyt 2";
}

void MainWindow::on_p2end_clicked()
{
    currentPlayer = 1;
    qDebug() << "Pelaaja on nyt 1";
}

void MainWindow::on_time_120_clicked()
{
    gameTime = 120;
    p1Time = gameTime;
    p2Time = gameTime;

    // ui:n alustukset
    ui->progressBar_1-> setRange(0, gameTime);
    ui->progressBar_2-> setRange(0, gameTime);
    ui->progressBar_1 -> setValue(gameTime);
    ui->progressBar_2 -> setValue(gameTime);
    qDebug() << "Peli kestää 120 sec";
}

void MainWindow::on_time_5_clicked()
{
    gameTime = 360;
    p1Time = gameTime;
    p2Time = gameTime;

    // ui:n alustukset
    ui->progressBar_1-> setRange(0, gameTime);
    ui->progressBar_2-> setRange(0, gameTime);
    ui->progressBar_1 -> setValue(gameTime);
    ui->progressBar_2 -> setValue(gameTime);
    qDebug() << "Peli kestää 360 sec/5 min";
}
