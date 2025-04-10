#include <QTextStream>
#include <QString>

int main()
{
    QTextStream out(stdout);
    QString str1 = "I love MSU";

    out << str1 << Qt::endl;

    QString str2("MSU loves me");

    out << str2 << Qt::endl;

    std::string s1 = "MSU loves nobody";

    QString str3 = s1.c_str();

    out << str3 << Qt::endl;

    std::string s2 = "Academ don't love u";

    QString str4 = QString::fromLatin1(s2.data(), s2.size());

    out << str4 << Qt::endl;

    char s3[] = "Academ for nobody";

    QString str5(s3);

    out << str5 << Qt::endl;

    return 0;

}
