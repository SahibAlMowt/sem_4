#include <QTextStream>
#include <QFileInfo>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QTextStream out(stdout);
    out.setCodec("UTF8");

    if(argc != 2)
    {
        qWarning("No file provided");
        return -1;
    }

    QString filename = argv[1];

    QFileInfo fileinfo(filename);

    QDateTime last_read = fileinfo.lastRead();
    QDateTime last_mod = fileinfo.lastModified();

    out << "last read: " << last_read.toString() << Qt::endl;
    out << "last modifided: " << last_mod.toString() << Qt::endl;

    return 0;
}
