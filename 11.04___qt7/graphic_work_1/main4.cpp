#include <QApplication>
#include <QWidget>
#include <QPushButton>

class MyButton: public QWidget
{
public:
    MyButton(QWidget *parent = 0);
};

MyButton::MyButton(QWidget *parent): QWidget(parent)
{
    QPushButton *quitBtn = new QPushButton(QString("BANANA"), this);

    quitBtn -> setGeometry(140, 65, 70, 30);

    connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MyButton window;
    window.resize(350, 150);

    window.setWindowTitle("NOT BANANA");

    window.show();

    return app.exec();
}
