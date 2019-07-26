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

bool isEven(int num){
    if(num%2 == 0){
        cout << true;
    }
    else{
        return false;
    }
}

int main(){
    cout<< isEven(6);
}