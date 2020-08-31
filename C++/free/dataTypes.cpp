/*
 * Copyright (c) 2020, Shashank Verma <shashank.verma2002@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 */

#include <iostream>

int main() {

    // Char and text related
    std::string text = "This is a sentence";    // General series of characters (sentence)
    char alphabet = 'a';                        // Any single character

    // Numbers related
    int integer = 0;                // Integers from -2,147,483,648 to 2,147,483,648
    long bigNumber = 3e8;           // '3e8' = 3.0 x 10^8 (Speed of light), storing large numbers
    float decimal = 1.3;            // Simple decimal numbers
    double bigDecimal = 3.14159265; // More and longer decimal precision

    // True or false
    bool boolean = true;

    // Output all the data
    std::cout << "String: " << text << std::endl;
    std::cout << "Char:   " << alphabet << std::endl;
    std::cout << "Int:    " << integer << std::endl;
    std::cout << "Long:   " << bigNumber << std::endl;
    std::cout << "Float:  " << decimal << std::endl;
    std::cout << "Double: " << bigDecimal << std::endl;
    std::cout << "Bool:   " << boolean << std::endl;

    return 0;
}