#include "vertical.h"

#include <QVBoxLayout>
#include <QPushButton>

VerticalBox::VerticalBox(QWidget *parent): QWidget(parent)
{
    auto *vbox = new QVBoxLayout(this);

    vbox -> setSpacing(1);

    auto *prikmat = new QPushButton("Prikmat", this);

    prikmat -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto *ekonom = new QPushButton("Ekonom", this);

    ekonom -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    vbox -> addWidget(prikmat);
    vbox -> addWidget(ekonom);


    setLayout(vbox);
}
