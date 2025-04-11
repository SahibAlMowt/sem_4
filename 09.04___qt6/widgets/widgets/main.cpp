#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;

    window.resize(250, 150);

    window.setWindowTitle("MSU Baku");

    window.show();

    return app.exec();
}


