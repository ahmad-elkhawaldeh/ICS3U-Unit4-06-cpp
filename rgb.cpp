// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Oct 2019
// This program uses a nested loop

#include <iostream>

main() {
    // this function uses a nested loop

    // process & output
    for (int counter1 = 0; counter1 <= 255; ++counter1) {
        for (int counter2 = 0; counter2 <= 255;  ++counter2) {
            for (int counter3 = 0; counter3 <= 255; ++counter3) {
                std::cout << " RGB ("  << counter1 << " ," << counter2
                <<  " ," << counter3 <<  ")" << std::endl;
            }
        }
    }
}
