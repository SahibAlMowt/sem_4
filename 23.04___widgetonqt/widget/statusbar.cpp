#include "statusbar.h"

#include <QLabel>
#include <QFrame>
#include <QStatusBar>
#include <QHBoxLayout>

StatusBar::StatusBar(QWidget *parent): QMainWindow(parent)
{
    auto *frame = new QFrame(this);

    setCentralWidget(frame);

    auto *hbox = new QHBoxLayout(frame);

    ok_button = new QPushButton("Ok", frame);

    hbox -> addWidget(ok_button, 0, Qt::AlignLeft | Qt::AlignTop);

    apply_button = new QPushButton("Apply", frame);

    hbox -> addWidget(apply_button, 1, Qt::AlignLeft | Qt::AlignTop);

    statusBar();

    connect(ok_button, &QPushButton::clicked, this, &StatusBar::on_ok_pressed);

    connect(apply_button, &QPushButton::clicked, this, &StatusBar::on_apply_pressed);
}

void StatusBar::on_ok_pressed()
{
    statusBar() -> showMessage("Ok button pressed", 2000);
}

void StatusBar::on_apply_pressed()
{
    statusBar() -> showMessage("Apply button pressed", 2000);
}
