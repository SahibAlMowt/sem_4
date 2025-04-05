#include <QTextStream>
#include <QFile>

int main()
{
    QTextStream out(stdout);
    QFile file("text.txt");

    if(!file.open(QIODevice::ReadOnly))
    {
        qWarning("can not open file for reading");
        return -1;
    }

    QTextStream in(&file);

    while(!in.atEnd())
    {
        QString line = in.readLine();
        out << line << Qt::endl;
    }

    file.close();

    return 0;
}
