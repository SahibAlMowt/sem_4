#include <QTextStream>

int main()
{
    QTextStream out(stdout);

    int digits = 0;
    int letters = 0;
    int spaces = 0;
    int puncts = 0;

    QString str = "15 students in 223 group";

    foreach(QChar s, str)
    {
        if(s.isDigit())
        {
            digits++;
        }
        else if(s.isLetter())
        {
            letters++;
        }
        else if(s.isSpace())
        {
            spaces++;
        }
        else if(s.isPunct())
        {
            puncts++;
        }
    }

    out << QString("there are %1 characters").arg(str.count()) << Qt::endl;

    out << QString("there are %1 letters").arg(letters) << Qt::endl;
    out << QString("there are %1 digits").arg(digits) << Qt::endl;
    out << QString("there are %1 spaces").arg(spaces) << Qt::endl;
    out << QString("there are %1 puncts").arg(puncts) << Qt::endl;

    return 0;
}
