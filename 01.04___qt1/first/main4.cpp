#include <QTextStream>

int main()
{
    QTextStream out(stdout);
    QString s1 = "MSU Baku";
    QString s2 = "MSU Baku\n";
    QString s3 = "MSU Baku ";
    QString s4 = "МГУ Баку";

    out << s1.length() << " " << s1.count() << " " << s1.size() << Qt::endl;
    out << s2.length() << " " << s2.count() << " " << s2.size() << Qt::endl;
    out << s3.length() << " " << s3.count() << " " << s3.size() << Qt::endl;
    out << s4.length() << " " << s4.count() << " " << s4.size() << Qt::endl;

    return 0;
}
