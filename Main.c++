#include <QApplication>

#include "MainFramework.h"

int main(int argc, char *argv[])
{
    QApplication J2R2(argc, argv);

    MainFramework fwkMain;
        fwkMain.Start();

    return J2R2.exec();
}
