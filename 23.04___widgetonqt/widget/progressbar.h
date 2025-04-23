#pragma once

#include <QWidget>
#include <QProgressBar>
#include <QPushButton>

class ProgressBarEx: public QWidget
{

    Q_OBJECT

public:

    ProgressBarEx(QWidget *parent = nullptr);

private:

    int progress;
    QTimer *timer;
    QPushButton *start_button;
    QPushButton *stop_button;
    QProgressBar *pbar;

    static const int DELAY = 200;
    static const int MAX_VALUE = 100;

    void update_bar();
    void start_my_timer();
    void stop_my_timer();
};


