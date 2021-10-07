// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Oct 2021
// This program prints all numbers from 1000 to 2000

#include <iostream>
#include <string>

int main() {
    // This function prints all numbers from 1000 to 2000
    std::string output;
    int endRange = 2000;

    // process & output
    for (int num = 1000; num <= endRange; num++) {
        if (num % 5 == 0) {
            output = std::to_string(num);
        } else {
            output += " " + std::to_string(num);
        }

        if (num % 5 == 4 || num == endRange) {
            std::cout << output << std::endl;
        }
    }

    std::cout << "\nDone" << std::endl;
}