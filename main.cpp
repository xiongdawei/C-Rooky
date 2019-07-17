#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespce std;


// Phase 1 consits of editing a file with an editor program, normally known simply as an editor
// Type c extension, which indicate that a file contains c++ source code
// typical c++ development environment -- editing phase



using std::cout;
using std::cin;
using std::endl;

double mean(double,double,double);
int compare(int, int);

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout <<"Welcome to C++! " << std::endl;
    std::cout <<"This is my first C++ code"  << std::endl;
    double n=1.0, m=2.0, o=3.0;
    int x = 23, y = 10;
    std::cout << compare(x,y) << std::endl;
    std::cout << mean(n,m,o) << std::endl;
    return 0;
}

