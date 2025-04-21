#include <QHBoxLayout>

#include "slider.h"

Slider::Slider(QWidget *parent): QWidget(parent)
{
    auto *hbox = new QHBoxLayout(this);

    slider = new QSlider(Qt::Horizontal, this);
}
