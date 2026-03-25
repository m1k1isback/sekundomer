#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QList>

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

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QTime startTime;
    QTime elapsedTime;
    bool isRunning;
    QList<int> lapTimes;
    int lapCounter;
    QString formatTime(int milliseconds);
    int lastLapTime;
    int previousLapTime;
private slots:
    void startTimer();
    void stopTimer();
    void resetTimer();
    void updateDisplay();
    void lapTime();
};
#endif // MAINWINDOW_H
