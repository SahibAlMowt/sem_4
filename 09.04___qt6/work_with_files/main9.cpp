#include <QTextStream>
#include <QFileInfo>
#include <QDir>

int main(int argc, char *argv[])
{
    QTextStream out(stdout);
    out.setCodec("UTF8");

    if(argc != 2)
    {
        qWarning("no file provided");
        return -1;
    }

    QString directory = argv[1];
    QDir dir(directory);

    if(!dir.exists())
    {
        qWarning("directory does not exist");
        return -2;
    }

    dir.setFilter(QDir::Files | QDir::AllDirs);

    dir.setSorting(QDir::Size | QDir::Reversed);

    QFileInfoList list = dir.entryInfoList();

    int max_size = 0;

    foreach(QFileInfo finfo, list)
    {
        QString name = finfo.fileName();
        int size = name.size();

        if(size > max_size)
        {
            max_size = size;
        }
    }

    int len = max_size + 2;

    out << QString("Filename ").leftJustified(len).append("Bytes") << Qt::endl;

    for(int i = 0; i < list.size(); i++)
    {
        QFileInfo fileinfo = list.at(i);

        QString str = fileinfo.fileName().leftJustified(len);

        str.append(QString("%1").arg(fileinfo.size()));

        out << str << Qt::endl;
    }


    return 0;
}
