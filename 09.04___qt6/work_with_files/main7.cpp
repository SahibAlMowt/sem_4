#include <QTextStream>
#include <QFileInfo>

int main(int argc, char *argv[])
{
    QTextStream out(stdout);

    out.setCodec("UTF8");

    if(argc != 2)
    {
        qWarning("no file provide");
        return -1;
    }

    QString filename = argv[1];
    QFileInfo fileinfo(filename);

    QString absPath = fileinfo.absoluteFilePath();
    QString baseName = fileinfo.baseName();
    QString compBaseName = fileinfo.completeBaseName();
    QString fileName = fileinfo.fileName();
    QString suffix = fileinfo.suffix();
    QString compSuffix = fileinfo.completeSuffix();
    out << "abs path: " << absPath << "\n" << "base name: " << baseName << "\n" << "comp Base Name: " << compBaseName << "\n" << "file name: " << fileName << "\n" << "suffix: " << suffix << "\n" << "comp suffix: " << compSuffix << Qt::endl;

    return 0;
}


