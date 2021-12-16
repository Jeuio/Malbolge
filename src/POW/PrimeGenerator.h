//
// Created by Jeuio on 02.12.2021.
//

#pragma once

#define PATH_TO_PRIME_FILE "C:\\Users\\leon-patrick.hammerich\\CLionProjects\\Malbolge\\primes.txt"

#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>

class PrimeGenerator {

    std::vector<unsigned int> primes;

public:

    PrimeGenerator();

    void generatePrimes();

    std::vector<unsigned int>* getPrimes();
};
