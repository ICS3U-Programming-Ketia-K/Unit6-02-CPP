// Copyright (c) 2022 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Jan. 28, 2022
// This program uses a for loop to generate
// random numbers in a list, then
// displays the largest value.

#include <iostream>
#include <array>
#include <random>
#include <ctime>

// this function calculates the largest value in the array of elements
template <size_t MAX_ARRAY_SIZE>
int FindMaxValue(std::array<int, MAX_ARRAY_SIZE> ranNumbers) {
    int max = ranNumbers[0];

    for (int loopCounter = 0; loopCounter < ranNumbers.size(); loopCounter++) {
        if (max < ranNumbers[loopCounter]) {
            max = ranNumbers[loopCounter];
        }
    }
    return max;
}


int main() {
    // declare constants
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // initialize counter
    int loopCounter = 0;

    // declaring variables
    std::array<int, MAX_ARRAY_SIZE> ranNumbersUser;
    int maxUser;

    // generate random
    srand(time(NULL));

    // display opening message
    std::cout << "This program generates a list of 10 random ";
    std::cout << "numbers between 0 and 100, ";
    std::cout << "then determines the largest number.";
    std::cout << std::endl;
    std::cout << std::endl;

    // displays random numbers and determines the maximum value
    for (loopCounter = 0; loopCounter < MAX_ARRAY_SIZE; loopCounter++) {
        int randomNumber = (rand() % (MIN_NUM + MAX_NUM));

        ranNumbersUser[loopCounter] = randomNumber;
        std::cout << ranNumbersUser[loopCounter];
        std::cout << " added to the list at position " << loopCounter;
        std::cout << std::endl;
    }

    maxUser = FindMaxValue(ranNumbersUser);
    std::cout << std::endl;
    std::cout << "The maximum value is: " << maxUser;
}
