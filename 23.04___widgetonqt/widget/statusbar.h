#pragma once

#include <QMainWindow>
#include <QPushButton>

class StatusBar: public QMainWindow
{

    Q_OBJECT

public:

    StatusBar(QWidget *parent = nullptr);

private slots:

    void on_ok_pressed();
    void on_apply_pressed();

private:

    QPushButton *ok_button;
    QPushButton *apply_button;

};
