#ifndef CARSIMULATION_H
#define CARSIMULATION_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class CarSimulation; }
QT_END_NAMESPACE

class CarSimulation : public QMainWindow
{
    Q_OBJECT

public:
    CarSimulation(QWidget *parent = nullptr);
    ~CarSimulation();

private:
    Ui::CarSimulation *ui;
};
#endif // CARSIMULATION_H
