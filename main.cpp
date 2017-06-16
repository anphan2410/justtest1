#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QLatin1String test("<3 I Love You");
    qDebug() << test.left(7);

    return a.exec();
}
