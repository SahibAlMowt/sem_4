#include <QTimer>
#include <QGridLayout>

#include "progressbar.h"

ProgressBarEx::ProgressBarEx(QWidget *parent): QWidget(parent)
{
    progress = 0;

    timer = new QTimer(this);

    connect(timer, &QTimer::timeout, this, &ProgressBarEx::update_bar);

    QGridLayout *grid = new QGridLayout(this);

    grid -> setColumnStretch(2, 1);

    pbar = new QProgressBar();

    grid -> addWidget(pbar, 0, 0, 1, 3);

    start_button = new QPushButton("Start", this);

    connect(start_button, &QPushButton::clicked, this, &ProgressBarEx::start_my_timer);

    grid -> addWidget(start_button, 1, 0, 1, 1);

    stop_button = new QPushButton("Stop", this);

    connect(stop_button, &QPushButton::clicked, this, &ProgressBarEx::stop_my_timer);

    grid -> addWidget(stop_button, 1, 1);
}

void ProgressBarEx::start_my_timer()
{
    if(progress >= MAX_VALUE)
    {
        progress = 0;
        pbar -> setValue(0);
    }

    if(!timer -> isActive())
    {
        start_button -> setEnabled(false);
        stop_button -> setEnabled(true);
        timer -> start(DELAY);
    }
}

void ProgressBarEx::stop_my_timer()
{
    if(timer -> isActive())
    {
        start_button -> setEnabled(true);
        stop_button -> setEnabled(false);
        timer -> stop();
    }
}

void ProgressBarEx::update_bar()
{
    progress++;

    if(progress <= MAX_VALUE)
    {
        pbar -> setValue(progress);
    }
    else
    {
        timer -> stop();
        start_button -> setEnabled(true);
        stop_button -> setEnabled(false);
    }
}
