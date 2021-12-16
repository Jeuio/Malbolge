//
// Created by Jeuio on 02.12.2021.
//

#pragma once

#include <iostream>
#include <random>
#include <vector>
#include <time.h>

struct Task {

    uint64_t question;
    uint64_t result[2];
};

class TaskGenerator {

    std::mt19937_64 mt;

public:

    TaskGenerator();

    Task generateTask(std::vector<uint32_t> primes, float difficulty);
};