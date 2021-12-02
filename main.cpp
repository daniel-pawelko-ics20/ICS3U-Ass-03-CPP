// Copyright (c) 2021 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Dec 2021
// Odd or even

#include <iostream>

int main() {
    // main function for creating odd or even program
    // define variables
    int number;

    // input
    std::cout << "Enter an integer: " << std::endl;
    std::cin >> number;

    // process/output
    if ((number % 2) == 0) {
        std::cout << number << " is Even" << std::endl;
    } else {
        std::cout << number << " is Odd" << std::endl;
    }

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
