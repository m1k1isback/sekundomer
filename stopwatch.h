#ifndef STOPWATCH_H
#define STOPWATCH_H
#pragma once
#include <QWidget>
#include <QTimer>
// Подключи сюда заголовки для кнопок, меток и времени (QPushButton, QLabel, QTime и т.д.)

class Stopwatch : public QWidget
{
    Q_OBJECT // Эта макрос обязателен для сигналов и слотов

public:
    explicit Stopwatch(QWidget *parent = nullptr);
    ~Stopwatch();

private slots:
    // Сюда ты будешь вешать логику
    void startTimer();
    void stopTimer();
    void resetTimer();
    void updateDisplay(); // Эта функция будет вызываться таймером

private:
    // Элементы интерфейса
    QLabel *timeLabel;
    QPushButton *startButton;
    QPushButton *stopButton;
    QPushButton *resetButton;

    // Логика времени
    QTimer *timer;          // Двигатель
    QTime startTime;        // Когда нажали старт в последний раз
    QTime elapsedTime;      // Сколько всего накопилось времени (до паузы)
    bool isRunning;         // Флаг: идет сейчас отсчет или нет

    // Вспомогательная функция
    QString formatTime(int milliseconds); // Превращает число в строку "00:00:00"
};
#endif // STOPWATCH_H
