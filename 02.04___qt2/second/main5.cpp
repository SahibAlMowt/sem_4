#include <QTextStream>
#include <QString>

int main()
{
    QTextStream out(stdout);

    QString s1 = "15";
    QString s2 = "12";

    out << s1.toInt() + s2.toInt() << Qt::endl;

    int n1 = 30;
    int n2 = 60;

    QString s3 = QString::number(n1);
    QString s4 = QString::number(n2);

    out << s3 + s4 << Qt::endl;

    return 0;
}
