#include <QTextStream>

int main()
{
    QTextStream out(stdout);

    QString s1 = "15";
    QString s2 = "12";
    QString s3, s4;

    out << s1.toInt() + s2.toInt() << Qt::endl;

    int n1 = 30;
    int n2 = 60;

    out << s3.setNum(n1) + s4.setNum(n2) << Qt::endl;

    return 0;
}
