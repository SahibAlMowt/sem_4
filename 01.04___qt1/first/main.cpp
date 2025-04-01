#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Qt version: " << qVersion() << "\n";

    return a.exec();
}
