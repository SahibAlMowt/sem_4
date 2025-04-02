#include <QTextStream>

int main()
{
    QTextStream out(stdout);
    QString name = "Name: ";
    QString occupation = "Work experience: ";
    QString address = "Address: ";

    int width = occupation.size();

    out << name.rightJustified(width, '>') << "Sam" << Qt::endl;
    out << occupation.rightJustified(width, '>') << "trade" << Qt::endl;
    out << address.rightJustified(width, '>') << "MSU's basement" << Qt::endl;

    //==========================================

    out << name.leftJustified(width, '<') << "Sam" << Qt::endl;
    out << occupation.leftJustified(width, '<') << "trade" << Qt::endl;
    out << address.leftJustified(width, '<') << "MSU's basement" << Qt::endl;

    return 0;
}
