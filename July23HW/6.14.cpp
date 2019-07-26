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
using std::endl;

// a
int roundToInteger(double num){
    int inter = num+0.5;
    return inter;
}

double roundToTenths(double num){
    num = num*10+0.5;
    int inter = num;
    double interm = inter*0.1;
    return interm;
}

double roundToHundredths(double num){
    num = num*100+0.5;
    int inter = num;
    double interm = inter*0.01;
return interm;
}

double roundToThousandths(double num){
    num = num*1000+0.5;
    int inter = num;
    double interm = inter*0.001;
    return interm;
}




int main(){
    cout<< roundToInteger(6.4);
    cout << "\n";
    cout<< roundToTenths(3.26);
    cout << "\n";
    cout<< roundToHundredths(5.565);
    cout << "\n";
    cout << roundToThousandths(8.6543);
}