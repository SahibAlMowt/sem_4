#include <QTextStream>

int main()
{
    QTextStream out(stdout);

    QString str = "MSU Baku branch";

    foreach(QChar qc, str)
    {
        out << qc << " ";
    }

    out << Qt::endl;

    for(QChar *it = str.begin(); it != str.end(); it++)
    {
        out << *it << " ";
    }

    out << Qt::endl;

    for(int i = 0; i < str.size(); i++)
    {
        out << str.at(i) << " ";
    }

    return 0;
}
