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

#include <iostream>     // This is a lib which we load by including it
                        // This lib is then responsible for output (c out) and input (c in)
#include <string>       // Including this lib helps us to take input as a whole string, like name or sentence

using namespace std;    // This is namespace allow to group enities like 
                        // classes, objects, variables and functions under a name

int main() {
    
    string name;        // You can see that in previous lesson (dataTypes), string was accessed by 'std::string'
                        // But here, since we used namespace std, the whole code below namespace line is grouped with 'std'
    cout << "Enter your name:";     // Hence, even std::cout is accessed as cout :)
    getline(cin, name);     // This function is from '#include <string>'. 'cin' (c in) is responsible for input stream

    int age;
    cout << "Enter your age:";
    cin >> age;         // You can see that instead of '<<', '>>' is used 
                        // because cin put the input to age variable. It only input the 1st set of chars before space
                        //         cin        >>        age;
    
    cout << "Hello " << name << " !" << endl << "You are " << age << " years old.";
}