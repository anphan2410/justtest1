#include <QCoreApplication>
#include <QDebug>
#include <QCanBus>
#include <QCanBusDevice>
#include <QCanBusFrame>
#include <QCanBusFactory>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QLatin1String test("<3 I Love You");
    qDebug() << test.left(7);

    return a.exec();
}
