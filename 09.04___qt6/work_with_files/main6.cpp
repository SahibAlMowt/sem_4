#include <QTextStream>
#include <QDir>

int main()
{
    QTextStream out(stdout);

    out.setCodec("UTF8");

    out << "current path: " << QDir::currentPath() << Qt::endl;
    out << "home path: " << QDir::homePath() << Qt::endl;
    out << "temporary path: " << QDir::tempPath() << Qt::endl;
    out << "root path: " << QDir::rootPath() << Qt::endl;

    return 0;
}

