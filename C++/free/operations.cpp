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

using namespace std;

int main() {

    // Here are the different arithmetic operations
    // Add = +
    // Sub = -
    // Div = /
    // Mul = *

    // Try this program with different number related data types
    // By changing 'int' to the data type you want to try
    // And notice the changes in the outcome
    int num1, num2;
    cout << "Enter a number:";
    cin >> num1;

    cout << "Enter another number:";
    cin >> num2;

    cout << endl;
    cout << "Add = " << (num1 + num2) << endl;
    cout << "Sub = " << (num1 - num2) << endl;
    cout << "Div = " << (num1 / num2) << endl;
    cout << "Mul = " << (num1 * num2) << endl;

    return 0;
}