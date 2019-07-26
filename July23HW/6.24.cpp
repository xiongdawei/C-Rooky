//
// Created by Mr.нет's   on 2019-07-26.
//

#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <algorithm>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int quotient(int a, int b){
    if (a%b==0){
        return a/b;
    }
    else{
        int remainder = a%b;
        a -= remainder;
        return a/b;
    }
}

int remainder(int a, int b){
    int main = quotient(a,b);
    return a-main*b;
}

int split(int a){
    int count = 10;
    while(a>0){
        cout<< quotient(a,count) << setw(2);
        a-=quotient(a,count);
        count = count*10;
    }
}

int main(){
    //cout<<quotient(203,10);
    //cout<<"\n";
    //cout<<split(203,10)
    //cout<<"\n";
    split(324);
}