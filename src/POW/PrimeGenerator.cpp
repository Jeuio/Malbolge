//
// Created by Jeuio on 02.12.2021.
//

#include "PrimeGenerator.h"
#include <thread>

PrimeGenerator::PrimeGenerator() {

    std::ifstream primeFile(PATH_TO_PRIME_FILE);
    unsigned int prevPrime = 2;
    unsigned int prime;
    while (primeFile >> prime) {

        if (prevPrime > prime) {

            std::cout << "There is definitely something very wrong here" << std::endl;
        } else {
            prevPrime = prime;
            this->primes.push_back(prime);
        }
    }
    primeFile.close();
    if (prime <= this->primes.at(this->primes.size() - 2)) {

        std::cerr << "Prime file seems to be corrupted" << std::endl;
        this->primes.clear();
    }
}

void PrimeGenerator::generatePrimes() {

    std::ofstream primeFile(PATH_TO_PRIME_FILE, std::ios::app);

    unsigned short primeCounter = 0;
    unsigned int potentialPrime = (this->primes.back());

    for (;;) {
        potentialPrime += 2;
        auto root = (unsigned int) (sqrt(potentialPrime) + 1);

        bool isPrime = true;
        for (int i = 0; i < this->primes.size() - 1; ++i) {

            unsigned int divisor = this->primes.at(i);

            if (divisor <= root) {

                if (potentialPrime % divisor == 0) {

                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {

            primes.push_back(potentialPrime);
            //std::cout << potentialPrime << std::endl;
            primeFile << "\n" << potentialPrime;
            primeCounter++;
            if (primeCounter >= 500) {
                primeCounter = 0;
                primeFile.flush();
            }
        }
    }
    primeFile.close();
}

std::vector<unsigned int> *PrimeGenerator::getPrimes() {

    return &this->primes;
}