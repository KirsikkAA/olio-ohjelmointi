#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startGame_clicked();

    void updateProgressBar();

    void on_p1end_clicked();

    void on_p2end_clicked();

    void on_stopGame_clicked();

    void on_time_120_clicked();

    void on_time_5_clicked();

private:
    Ui::MainWindow *ui;
    int p1Time;
    int p2Time;
    int currentPlayer = 1;
    int gameTime = 0;
    int setTime;
    QTimer *timer = nullptr;
};
#endif // MAINWINDOW_H
