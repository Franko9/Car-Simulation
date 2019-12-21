#include "carsimulation.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CarSimulation w;
    w.show();
    return a.exec();
}
