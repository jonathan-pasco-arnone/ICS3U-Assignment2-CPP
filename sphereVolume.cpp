// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on November 2020
// This program calculates the volume of a sphere

#include <iostream>
#include <cmath>

int main() {
    // This function calculates the volume of a sphere and outputs it
    double radius;
    double volume;

    std::cout << "" << std::endl;
    std::cout << "Please enter the radius of the sphere: ";
    std::cin >> radius;
    std::cout << "" << std::endl;
    volume = 1.0 * 4 / 3 * M_PI * pow(radius, 3);
    std::cout << "If the radius of the sphere is " << radius << "mm"
          << std::endl;
    std::cout << "Then the volume is " << volume << "mm^3" << std::endl;
}
