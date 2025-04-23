#pragma once

#include <QWidget>
#include <QPushButton>
#include <QListWidget>

class ListWidget: public QWidget
{

    Q_OBJECT

public:

    ListWidget(QWidget *parent = nullptr);

private slots:

    void add_item();
    void rename_item();
    void remove_item();
    void clear_item();

private:

    QListWidget *lw;

    QPushButton *add;
    QPushButton *rename;
    QPushButton *remove;
    QPushButton *removeAll;


};
