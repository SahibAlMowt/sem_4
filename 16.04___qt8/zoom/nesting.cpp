#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QListWidget>

#include "nesting.h"

Layouts::Layouts(QWidget *parent): QWidget(parent)
{

    auto *vbox = new QVBoxLayout();
    auto *hbox = new QHBoxLayout(this);

    auto *lw = new QListWidget(this);

    lw -> addItem("Prikmat");
    lw -> addItem("Ekonom");
    lw -> addItem("Psix");
    lw -> addItem("Chem");
    lw -> addItem("Physics");
    lw -> addItem("Phylology(tech");

    auto *add = new QPushButton("Add", this);
    auto *rename = new QPushButton("Rename", this);
    auto *remove = new QPushButton("Remove", this);
    auto *remove_all = new QPushButton("Remove ALL", this);

    vbox -> setSpacing(3);
}
