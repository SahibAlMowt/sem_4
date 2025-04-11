#include <QTextStream>
#include <QDir>

int main()
{
    QTextStream out(stdout);

    out.setCodec("UTF8");

    QDir dir;

    if(dir.mkdir("msubaku"))
    {
        out << "msubaku directory created" << Qt::endl;
    }

    dir.mkdir("app_math");

    if(dir.exists("app_math"))
    {
        dir.rename("app_math", "app_math_second_grenade");
    }

    dir.mkpath("msu/baku/app_math");

    return 0;
}
