#include "simple_menu.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    SimpleMenu window;
    window.resize(250, 150);

    window.setWindowTitle("---");

    window.show();

    return app.exec();
}
