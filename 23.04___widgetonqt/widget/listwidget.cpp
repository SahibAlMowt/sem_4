#include <QVBoxLayout>
#include <QInputDialog>

#include "listwidget.h"

ListWidget::ListWidget(QWidget *parent): QWidget(parent)
{
    QVBoxLayout *vbox = new QVBoxLayout();

    vbox -> setSpacing(10);

    QHBoxLayout *hbox = new QHBoxLayout(this);

    lw = new QListWidget(this);

    lw -> addItem("app_math");
    lw -> addItem("ekono$");
    lw -> addItem("phys");
    lw -> addItem("chem");
    lw -> addItem("filog");
    lw -> addItem("psix");

    add = new QPushButton("Add", this);
    rename = new QPushButton("Rename", this);
    remove = new QPushButton("Remove", this);
    removeAll = new QPushButton("Remove All", this);

    vbox -> setSpacing(3);
    vbox -> addStretch(1);

    vbox -> addWidget(add);
    vbox -> addWidget(rename);
    vbox -> addWidget(remove);
    vbox -> addWidget(removeAll);

    vbox -> addStretch(1);

    hbox -> addWidget(lw);
    hbox -> addSpacing(15);

    hbox -> addLayout(vbox);

    connect(add, &QPushButton::clicked, this, &ListWidget::add_item);
    connect(rename, &QPushButton::clicked, this, &ListWidget::rename_item);
    connect(remove, &QPushButton::clicked, this, &ListWidget::remove_item);
    connect(removeAll, &QPushButton::clicked, this, &ListWidget::clear_item);

    setLayout(hbox);
}

void ListWidget::add_item()
{
    QString c_text = QInputDialog::getText(this, "Item", "Enter new Item");
    QString s_text = c_text.simplified();

    if(!s_text.isEmpty())
    {
        lw -> addItem(s_text);
        int r = lw -> count() - 1;
        lw -> setCurrentRow(r);
    }
}


void ListWidget::rename_item()
{
    QListWidgetItem *curItem = lw -> currentItem();

    int r = lw -> row(curItem);

    QString c_text = curItem -> text();
    QString r_text = QInputDialog::getText(this, "Item", "Enter new Item", QLineEdit::Normal, c_text);

    QString s_text = r_text.simplified();

    if(!s_text.isEmpty())
    {
        QListWidgetItem *item = lw ->takeItem(r);
        delete item;

        lw -> insertItem(r, s_text);
        lw -> setCurrentRow(r);
    }

}

void ListWidget::remove_item()
{
    int r = lw -> currentRow();

    if(r != -1)
    {
        QListWidgetItem *item = lw -> takeItem(r);

        delete item;
    }
}

void ListWidget::clear_item()
{
    if(lw -> count() != 0)
    {
        lw -> clear();
    }
}
