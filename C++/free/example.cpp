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

/**
 * Here, we will make use of all the concepts you learnt till now.
 * 
 * This is a program to calculate area of a right-angled triangle.
 */
int main() {

    float base, height;
    cout << "Enter the base of triangle:";
    cin >> base;  // Taking input of base

    cout << "Enter the height of triangle:";
    cin >> height; // Taking input of base

    // Area of a right-angled triangle
    double area = (1.0 / 2.0) * base * height;
    // Notice that the formula was written as "1.0/2.0" instead of simple "1/2"
    // that's because computer understands "1/2" as 'int' (integer) and hence it rounds off the 0.5 to nearest
    // integer that is 0. So multiplying the base and height will give area as 0 which we don't want.
    // To make sure that it understands that we need 0.5 and not 0, we need to show it as decimal "1.0/2.0", then computer
    // understands it as float (decimal) and doesn't round off 0.5 to 0.
    // You can experiment this yourself by running program with "1/2" and "1.0/2.0" to see the difference.

    cout << "Area of triangle = " << area << " units^2" << endl;

    return 0;
}