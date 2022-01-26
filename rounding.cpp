// Copyright (c) 2022 Alexander Matheson All rights reserved.
//
// Created by: Alexander Matheson
// Created on: Jan 26, 2022
// This program gets input from the user and rounds it to a number
// of decimal places decided by the user.
#include <iostream>
#include <cmath>


// function to round user input
float RoundDecimal(float &decimal, int round) {
    decimal = decimal * pow(10, round);
    decimal = decimal + 0.5;
    decimal = static_cast<int>(decimal);
    decimal = decimal / pow(10, round);
}


int main() {
    // declare variables
    std::string decimalString;
    std::string roundString;
    float decimalInput;
    int roundInput;

    // get decimal to be rounded and places to round to
    std::cout << "Enter the decimal to be rounded: ";
    std::getline(std::cin, decimalString);
    std::cout <<
    "Enter the number of places this decimal should be rounded to: ";
    std::getline(std::cin, roundString);

    // error checking
    try {
        decimalInput = std::stof(decimalString);
        roundInput = std::stoi(roundString);
        // call function
        RoundDecimal(decimalInput, roundInput);
        // display rounded number
        std::cout << "The rounded number is " << decimalInput << ".";
    } catch (std::invalid_argument) {
        std::cout << "Invalid input(s).";
    }
}
