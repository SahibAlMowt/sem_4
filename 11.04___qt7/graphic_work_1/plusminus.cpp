#include "plusminus.h"
#include <QGridLayout>

PlusMinus::PlusMinus(QWidget *parent): QWidget(parent)
{
    QPushButton *plsBtn  = new QPushButton("+", this);
    QPushButton *mnsBtn = new QPushButton("-", this);

    lbl = new QLabel("0", this);

    QGridLayout *grid = new QGridLayout(this);

    grid -> addWidget(plsBtn, 0, 0);
    grid -> addWidget(mnsBtn, 0, 1);
    grid -> addWidget(lbl, 1, 1);

    setLayout(grid);

    connect(plsBtn, &QPushButton::clicked, this, &PlusMinus::onPlus);
    connect(mnsBtn, &QPushButton::clicked, this, &PlusMinus::onMinus);
}

void PlusMinus::onPlus()
{
    int value = lbl -> text().toInt();
    value++;

    lbl -> setText(QString::number(value));
}

void PlusMinus::onMinus()
{
    int value = lbl -> text().toInt();
    value--;

    lbl -> setText(QString::number(value));
}
