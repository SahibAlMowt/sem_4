#include <QTextStream>
//#include <QList>

int main()
{
    QTextStream out(stdout);

    QList<QString> faculties = {"app_math_1", "app_math_2", "app_math_3", "app_math_4", "app_math_5"};

    for(int i = 0; i != faculties.size(); i++)
    {
        out << faculties.at(i) << Qt::endl;
    }

    faculties << QString("app_math_6") << QString("app_math_7");

    std::sort(faculties.begin(), faculties.end());

    for(QString faculty: faculties)
    {
        out << faculty << Qt::endl;
    }

    return 0;
}
