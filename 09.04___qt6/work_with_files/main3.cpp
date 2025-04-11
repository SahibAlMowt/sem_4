#include <QTextStream>
#include <QFileInfo>

int main(int argc, char *argv[])
{
    QTextStream out(stdout);

    if(argc != 2)
    {
        qWarning("No file provided");
        return -1;
    }

    QString filename = argv[1];

    QFileInfo fileinfo (filename);

    QString group = fileinfo.group();
    QString owner = fileinfo.owner();

    out << "group " << group << Qt::endl;
    out << "owner " << owner << Qt::endl;

    return 0;
}
