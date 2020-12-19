// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 2020
// Program finds factors

#include <iostream>
#include <string>


int main() {
    // Function finds factors

    std::string number_string;
    int number;
    int loop_counter = 0;

    std::cout << "Give me a positive number and I will give you all of"
    << " its factors" << std::endl;

    // Process
    while (true) {
        std::cout << "Enter number: ";
        std::cin >> number_string;

        try {
            number = std::stoi(number_string);
            if (number < 0) {
                throw std::invalid_argument("");
            }
            
            break;
        } catch (std::invalid_argument) {
            std::cout << "This isn't a valid input" << std::endl;
        }
    }
    
    std::cout << "The factors of " << number << " are: ";

    for (loop_counter = 1; loop_counter < number + 1; loop_counter++) {
        if (number % loop_counter == 0) {
            if (loop_counter < number) {
                if (loop_counter == 1) {
                    std::cout << "[";
                    }
            
                std::cout << loop_counter << ", ";
        } else {
            std::cout << loop_counter << "";
                }
        }
    }
    std::cout << "]";
}
