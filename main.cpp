#include <QCoreApplication>
#include <QProcess>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QProcess::execute("/bin/bash justtest1.sh");


    return a.exec();
}
