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
 * What are arrays ?
 * - You can store a bunch of values, in an ordered series, of a single dataType.
 * 
 * Example :
 * Let's take dataType as String
 * Inside array -> below are blocks that contains data of Strings and any block
 *                   can be accessed by a particular index(position).
 *
 * Let's name this array "words"
 *            "Some"    "Cat"  "Dog"   "Toy"  "Candy" "Apple"  "Ball"
 *               |       |       |       |       |       |       |
 *               0       1       2       3       4       5       6
 * Position always starts from 0 => first index is 0. Just like your text book, these words have their own position
 * called "index" and it starts from 0.
 *
 * You can understand this array like this:
 *      - In the array "words", the word "Apple" is at 5th index/slot/block (6th place in series)
 *      - If you access the 2nd index of array "word", the value you get would be "Dog" which is at 3rd place in series
 *      - The total size of array is 7 and it contains 7 values
 */

int main() {

    // In code, the above "words" array would be written like this:
    string words[7] = {"Some", "Cat", "Dog", "Toy", "Candy", "Apple", "Ball"};
    // dataType = string
    // words[7] = 7 is size of the array you are defining
    // {} = you place elements inside this separating each element with ','

    // If you want to access the word "Dog", how would you access it ?
    cout << words[2] << endl;
    // words = array
    // [] = accessing index
    // 2 = the index of the word "Dog"

    // You can even assign a new element to a particular index
    // Let's change "Dog" to "Ferret" at index 2 (3rd element)
    words[2] = "Feret";
    cout << "Updated: " << words[2] << endl;

    return 0;
}