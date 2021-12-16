//
// Created by Jeuio on 02.12.2021.
//

#include "POW.h"

TaskGenerator::TaskGenerator() {

    std::random_device rd;
    std::mt19937_64 tempmt(rd());
    this->mt = tempmt;
}

Task TaskGenerator::generateTask(std::vector<uint32_t> primes, float difficulty) {

    // @todo improve randomness

    std::uniform_int_distribution<uint64_t> dist(primes.size() * difficulty / 2, primes.size() * difficulty);

    Task task;
    task.result[0] = primes[dist(mt)];
    task.result[1] = primes[dist(mt)];

    task.question = task.result[0] * task.result[1];

    std::cout << "Task generated:" << std::endl;
    std::cout << task.result[0] << std::endl;
    std::cout << task.result[1] << std::endl;
    std::cout << task.question << std::endl;

    return task;
}