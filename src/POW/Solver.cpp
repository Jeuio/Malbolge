//
// Created by leon-patrick.hammerich on 16.12.2021.
//

#include "Solver.h"


Task Solver::solveTask(std::vector<uint32_t> primes, Task &task) {

    uint64_t question = task.question;

    for (uint32_t prime : primes) {

        if (question % prime == 0) {

            std::cout << "Result found:" << std::endl;
            task.result[0] = prime;
            task.result[1] = question / prime;
            std::cout << task.result[0] << std::endl;
            std::cout << task.result[1] << std::endl;
            break;
        }
    }

    return task;
}