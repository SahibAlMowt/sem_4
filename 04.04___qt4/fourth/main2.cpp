#include <QTextStream>
#include <QDate>

int main()
{
    QTextStream out(stdout);

    out.setCodec("UTF8");

    QList<QDate> dates{ QDate(2025,2,29),
                            QDate(2024,2,29),
                                QDate(2025,4,31)};


    for(int i = 0; i != dates.size(); i++)
    {
        if(dates.at(i).isValid())
        {
            out << "Date: " << i + 1 << " is Valid" << Qt::endl;
        }
        else
        {
            out << "Date: " << i + 1 << " is NOT Valid" << Qt::endl;
        }
    }

    return 0;
}
