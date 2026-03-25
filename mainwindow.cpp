#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = (new QTimer(this));
    timer->setInterval(10);

    // Для счётчика кругов
    lapCounter = 0;
    lastLapTime = 0;
    previousLapTime = 0;

    elapsedTime = QTime(0, 0, 0, 0);
    startTime = QTime::currentTime();
    isRunning = false;

    connect(ui->pushButtonStart, SIGNAL(clicked()), this, SLOT(startTimer()));
    connect(ui->pushButtonStop, SIGNAL(clicked()), this, SLOT(stopTimer()));
    connect(ui->pushButtonReset, SIGNAL(clicked()), this, SLOT(resetTimer()));
    connect(ui->pushButtonLap, SIGNAL(clicked()), this, SLOT(lapTime()));

    connect(timer, &QTimer::timeout, this, &MainWindow::updateDisplay);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::formatTime(int milliseconds) {
    int ms = milliseconds % 1000;
    int s = (milliseconds / 1000) % 60;
    int m = (milliseconds / 60000) % 60;
    int h = milliseconds / 3600000;

    return QString("%1:%2:%3.%4")
        .arg(h, 2, 10, QChar('0'))
        .arg(m, 2, 10, QChar('0'))
        .arg(s, 2, 10, QChar('0'))
        .arg(ms, 3, 10, QChar('0'));
}

void MainWindow::startTimer(){
    if(isRunning){
        return;
    }
    timer->start();
    isRunning = true;
    startTime = QTime::currentTime();
}

void MainWindow::updateDisplay(){
    QTime now = QTime::currentTime();

    int timeSinceStart = startTime.msecsTo(now);
    int elapsedTimeInMsecs = elapsedTime.msecsSinceStartOfDay();

    if (timeSinceStart < 0) timeSinceStart = 0;
    int totalMsecs = timeSinceStart + elapsedTimeInMsecs;

    ui->labelTimer->setText(formatTime(totalMsecs));
}

void MainWindow::stopTimer(){
    timer->stop();
    QTime now = QTime::currentTime();

    int timeSinceStart = startTime.msecsTo(now);
    int elapsedTimeInMsecs = elapsedTime.msecsSinceStartOfDay();

    int saveMsecs = timeSinceStart + elapsedTimeInMsecs;

    elapsedTime = QTime(0, 0, 0, 0).addMSecs(saveMsecs);

    isRunning = false;
}

void MainWindow::resetTimer(){
    timer->stop();

    elapsedTime = QTime(0, 0, 0, 0);
    isRunning = false;
    lapCounter = 0;
    lastLapTime = 0;
    previousLapTime = 0;
    ui->listWidget->clear();

    ui->labelTimer->setText(formatTime(0));
}

void MainWindow::lapTime(){
    if(!isRunning) return;

    QTime now = QTime::currentTime();

    int timeSinceStart = startTime.msecsTo(now);
    int elapsedTimeInMsecs = elapsedTime.msecsSinceStartOfDay();

    if (timeSinceStart < 0) timeSinceStart = 0;

    int totalMsecs = timeSinceStart + elapsedTimeInMsecs;

    int currentLap = totalMsecs - lastLapTime;

    lastLapTime = totalMsecs;

    lapCounter++;

    QString lapText = QString("Круг %1: %2")
                          .arg(lapCounter)
                          .arg(formatTime(currentLap));

    QListWidgetItem *item = new QListWidgetItem(lapText);

    if(previousLapTime > 0)
        if(currentLap < previousLapTime){
            item->setForeground(QBrush("green"));
        } else if(currentLap > previousLapTime) {
            item->setForeground(QBrush(QColor("red")));
        }

    previousLapTime = currentLap;

    ui->listWidget->addItem(item);
    ui->listWidget->scrollToBottom();
}
