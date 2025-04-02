#include <QTextStream>

const int STR_EQUAL = 0;

int main()
{
    QTextStream out(stdout);

    QString a = "MSU";
    QString b = "msu";
    QString c = "msu\n";

    if(QString::compare(a,b) == STR_EQUAL)
    {
        out << "a, b are equal" << Qt::endl;
    }
    else
    {
        out << "a, b are NOT equal" << Qt::endl;
    }

    out << "No case regarded" << Qt::endl;

    if(QString::compare(a, b, Qt::CaseInsensitive) == STR_EQUAL)
    {
        out << "a, b are equal" << Qt::endl;
    }
    else
    {
        out << "a, b are NOT equal" << Qt::endl;
    }

    if(QString::compare(b, c) == STR_EQUAL)
    {
        out << "b, c are equal" << Qt::endl;
    }
    else
    {
        out << "b, c are NOT equal" << Qt::endl;
    }

    c.chop(1);

    out << "After last character" << Qt::endl;

    if(QString::compare(b, c) == STR_EQUAL)
    {
        out << "b, c are equal" << Qt::endl;
    }
    else
    {
        out << "b, c are NOT equal" << Qt::endl;
    }

    return 0;
}
