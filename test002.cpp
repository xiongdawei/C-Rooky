//
// Created by Mr.нет's   on 2019-07-17.
//

#include <iostream>
#include <string>


// Phase 1 consits of editing a file with an editor program, normally known simply as an editor
// Type c extension, which indicate that a file contains c++ source code
// typical c++ development environment -- editing phase



using std::cout;
using std::cin;
using std::endl;

double mean(double  a, double  b, double  c) {
    double total;
    total = a + b + c;
    return total / 3;
}

int compare(int a, int b){
    int result;

    if (a>b)
        result = a;
    else
        result = b;
    return result;
}
