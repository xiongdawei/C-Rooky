//
// Created by Mr.нет's   on 2019-07-26.
//
#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <algorithm>
#include "num_function.h"
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//extern int quotient(int a, int b);
//extern int remainder(int a, int b);

int test(int n){
    int count = 10;
    while (count<n){
        count = count*10;
    }
    return count/10;
}

int inverse(int a){
    int count = 0;
    int divide1 = test(a);
    int divide2 = 1;
    while (a>=0){
        count += quotient(a,divide1)*divide2;
        cout << count;
        a -= quotient(a,divide1)*divide1;
        divide1 = divide1/10;
        divide2 = divide2*10;
    }
    return count;
}

int main(){
    //cout<<test(2359);
    //cout<<quotient(239,100);
    inverse(239);
}