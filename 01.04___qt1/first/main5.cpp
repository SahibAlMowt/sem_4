#include <QTextStream>

int main()
{
    QTextStream out(stdout);

    QString s1 = "There are %1 white roses";

    int n = 12;

    out << s1.arg(n) << Qt::endl;

    QString s2 = "There will %1 academs";

    double a = 0.2;

    out << s2.arg(a) << Qt::endl;

    QString s3 = "We will send %1 and %2 to academ";

    QString name1 = "nobody_1";
    QString name2 = "nobody_2";

    out << s3.arg(name1).arg(name2) << Qt::endl;

    return 0;
}
