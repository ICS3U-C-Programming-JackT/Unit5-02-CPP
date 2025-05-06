// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: May 1st, 2025
// Celsius to fahrenheit

#include <iostream>
#include <string>

void getArea(float height, float base) {
    // Create variable for area, print it out
    float area = height * base * 0.5;
    std::cout << "The area of your triangle is "<< area;
}

int main() {
    // Initialize variables for base and height
    std::string height;
    std::string base;
    float hei_fl;
    float bas_fl;

    // Get base and height
    std::cout << "Enter the height of your triangle: ";
    std::cin >> height;

    std::cout << "Enter the base of your triangle: ";
    std::cin >> base;

    // Try converting height and base to float
    try {
        hei_fl = std::stof(height);
        bas_fl = std::stof(base);

        // Check if base and height are above 0
        if (bas_fl > 0 && hei_fl > 0) {
            // Call area function
            getArea(hei_fl, bas_fl);
        } else {
            // Error msg if not above 0
            std::cout << "Enter numbers over 0 next time";
        }
    } catch(std::invalid_argument) {
        // Warn user if they entered string
        std::cout << "You entered a string, enter a number next time";
    }
}
