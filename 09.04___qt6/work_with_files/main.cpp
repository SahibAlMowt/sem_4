#include <QTextStream>
#include <QFile>

int main()
{
    QString filename = "text.txt";

    QFile file(filename);

    if(file.open(QIODevice::WriteOnly))
    {
        QTextStream out(&file);

        out << "app_math" << Qt::endl;
        out << "ekonom" << Qt::endl;
        out << "psix" << Qt::endl;
        out << "chemistry" << Qt::endl;
        out << "physics" << Qt::endl;
        out << "phyLOLgy" << Qt::endl;
    }
    else
    {
        qWarning("Can not open file");
    }

    file.close();

    return 0;
}
