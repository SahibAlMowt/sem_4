#include <QTextStream>
#include <QFile>


int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        qWarning("Not all arguments");
        return -1;
    }

    QString source = argv[1];

    if(!QFile(source).exists())
    {
        qWarning("File does not exist");
        return -2;
    }

    QString destin(argv[2]);

    QFile::copy(source, destin);

    return 0;
}
