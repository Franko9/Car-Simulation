#include "carsimulation.h"
#include "ui_carsimulation.h"

CarSimulation::CarSimulation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CarSimulation)
{
    ui->setupUi(this);
}

CarSimulation::~CarSimulation()
{
    delete ui;
}

