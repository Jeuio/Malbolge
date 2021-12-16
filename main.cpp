//
// Created by Jeuio on 18.11.2021.
//

/*
#include <QApplication>
#include <QPushButton>
*/

#include "src/POW/PrimeGenerator.h"
#include "src/POW/POW.h"
#include "src/POW/Solver.h"
#include <thread>

int main(int argc, char *argv[]) {


    PrimeGenerator pm;

    std::thread primeThread([&](){
        pm.generatePrimes();
    });


    TaskGenerator taskgenerator;
    Task task = taskgenerator.generateTask(*pm.getPrimes(), 1.0f);

    Solver solver;
    solver.solveTask(*pm.getPrimes(), task);



    /*
    QApplication a(argc, argv);
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();
    return QApplication::exec();
     */

    for(;;);

    return 0;
}
