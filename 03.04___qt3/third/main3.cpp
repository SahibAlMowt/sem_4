#include <QTextStream>
#include <QDate>

int main()
{
    QTextStream out(stdout);

    out.setCodec("CP866");

    QList<int> years({2020, 2021, 2022, 2023, 2024, 2025});

    foreach(int year, years)
    {
        if(QDate::isLeapYear(year))
        {
            out << year << " : visokosnya" << Qt::endl;
        }
        else
        {
            out << year << " : is not visokosnya" << Qt::endl;
        }
    }

    return 0;
}
