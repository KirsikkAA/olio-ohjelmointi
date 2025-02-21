#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // tila 1
    ui->numero1->setEnabled(true);
    ui->numero2->setEnabled(false);
    ui->tulos->setEnabled(false);
    ui->plus->setEnabled(false);
    ui->miinus->setEnabled(false);
    ui->kerto->setEnabled(false);
    ui->jako->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_plus_clicked()
{
    setActiveControls();
    //toimii vain jos molemmat numerot annettu oikein eli tila = 3
    if (tila == 3){

    QString numero1str = ui->numero1->text();
    int numero1 = numero1str.toInt();

     QString numero2str = ui->numero2->text();
     int numero2 = numero2str.toInt();

     int result = numero1+numero2;
     qDebug() << "Plus:" << result << "=" << numero1 << "+" << numero2;

     QString resStr = QString::number(result);
     ui->tulos->setText(resStr);

     tila = 1;
     qDebug() << "Laskun jälkeen tila " << tila;
    } else {
        qDebug() << "Virhe! Et antanut molempia numeroita tai unohdit painaa enter";
    }
}

void MainWindow::on_miinus_clicked()
{
    setActiveControls();
    if (tila == 3){
    QString numero1str = ui->numero1->text();
    int numero1 = numero1str.toInt();

    QString numero2str = ui->numero2->text();
    int numero2 = numero2str.toInt();

    int result = numero1-numero2;
    qDebug() << "Miinus:" << result << "=" << numero1 << "-" << numero2;

    QString resStr = QString::number(result);
    ui->tulos->setText(resStr);

    tila = 1;
    qDebug() << "Laskun jälkeen tila " << tila;
    }else{
       qDebug() << "Virhe! Et antanut molempia numeroita tai unohdit painaa enter";
    }
}

void MainWindow::on_kerto_clicked()
{
    setActiveControls();
    if (tila == 3){
    QString numero1str = ui->numero1->text();
    int numero1 = numero1str.toInt();

    QString numero2str = ui->numero2->text();
    int numero2 = numero2str.toInt();

    int result = numero1*numero2;
    qDebug() << "Kerto:" << result << "=" << numero1 << "*" << numero2;

    QString resStr = QString::number(result);
    ui->tulos->setText(resStr);

    tila = 1;
    qDebug() << "Laskun jälkeen tila " << tila;
    }else{
        qDebug() << "Virhe! Et antanut molempia numeroita tai unohdit painaa enter";
    }
}

void MainWindow::on_jako_clicked()
{
    setActiveControls();
    if (tila == 3){
    QString numero1str = ui->numero1->text();
    float numero1 = numero1str.toFloat();

    QString numero2str = ui->numero2->text();
    float numero2 = numero2str.toFloat();

    float result = numero1/numero2;
    qDebug() << "Jako:" << result << "=" << numero1 << "/" << numero2;

    QString resStr = QString::number(result);
    ui->tulos->setText(resStr);

    tila = 1;
    qDebug() << "Laskun jälkeen tila " << tila;
    }else{
        qDebug() << "Virhe! Et antanut molempia numeroita tai unohdit painaa enter";
    }
}

void MainWindow::on_clear_clicked()
{
    QString nollaa = QString::number(0);
    ui->tulos->setText(nollaa);
    ui->numero1->setText(nollaa);
    ui->numero2->setText(nollaa);

    tila = 1;
    qDebug() << "Clear jälkeen tila " << tila;
}


void MainWindow::on_N1_clicked()
{
    QString str = ui->N1->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_N2_clicked()
{
    QString str = ui->N2->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_N3_clicked()
{
    QString str = ui->N3->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_N4_clicked()
{
    QString str = ui->N4->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_N5_clicked()
{
    QString str = ui->N5->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_N6_clicked()
{
    QString str = ui->N6->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_N7_clicked()
{
    QString str = ui->N7->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_N8_clicked()
{
    QString str = ui->N8->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_N9_clicked()
{
    QString str = ui->N9->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_N0_clicked()
{
    QString str = ui->N0->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::numberClickHandler(int n)
{
    qDebug() << "Painettu nappi = " << n;
    if (tila == 1){
         qDebug() << "Elementti numero1 = " << n;
        //laita n -> numero1
       QString str = QString::number(n);
        ui->numero1->setText(str);

    } else if (tila == 2){
        qDebug() << "Elementti numero2 = " << n;
        //laita n-> numero2
        QString str = QString::number(n);
         ui->numero2->setText(str);
    }
}

void MainWindow::setActiveControls()
{
    //käyttöliittymän elementtien aktivointi
    if (tila == 1){
        ui->numero1->setEnabled(true);
        ui->numero2->setEnabled(false);

        ui->tulos->setEnabled(false);
        ui->plus->setEnabled(false);
        ui->miinus->setEnabled(false);
        ui->kerto->setEnabled(false);
        ui->jako->setEnabled(false);
    } else if (tila == 2){
        ui->numero1->setEnabled(false);
        ui->numero2->setEnabled(true);
        ui->tulos->setEnabled(false);

        ui->plus->setEnabled(false);
        ui->miinus->setEnabled(false);
        ui->kerto->setEnabled(false);
        ui->jako->setEnabled(false);
    } else if (tila == 3){
        ui->numero1->setEnabled(false);
        ui->numero2->setEnabled(false);

        ui->tulos->setEnabled(true);
        ui->plus->setEnabled(true);
        ui->miinus->setEnabled(true);
        ui->kerto->setEnabled(true);
        ui->jako->setEnabled(true);
    }
}

void MainWindow::on_enter_clicked()
{
    //tarkistus, että ei mene yli tila 3
    if (tila >= 3){
        tila = 3;
    }else{
        tila ++;
        qDebug() << "Siirrytty tilaan = " << tila;
    }
    setActiveControls();
}
