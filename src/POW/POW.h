//
// Created by Jeuio on 02.12.2021.
//

#pragma once

struct Task {

    unsigned long long int task;
    unsigned int result[];
};

class TaskGenerator {


public:
    Task generateTask();
};