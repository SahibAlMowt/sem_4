#pragma once

#include <QWidget>
#include <QLabel>
#include <QSlider>

class Slider: public QWidget
{

    Q_OBJECT

public:

    Slider(QWidget *parent = nullptr);

private:

    QSlider *slider;
    QLabel *label;

};
