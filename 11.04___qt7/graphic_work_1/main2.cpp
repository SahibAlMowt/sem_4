#include <QApplication>
#include <QWidget>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;

    window.resize(250, 150);
    window.setWindowTitle("MSU , Prikmat");
    window.setWindowIcon(QIcon("/home/stud-24/Downloads/witch-king.jpg"));

    window.show();

    return app.exec();
}
