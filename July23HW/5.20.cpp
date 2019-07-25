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

std::string Pythagorean(int max){
    for (int side1{1};side1<=max;++side1){
        for(int side2{1};side2<=max;++side2){
            for(int hypo{0};hypo<=max;++hypo){
                int one = side1*side1;
                int two = side2*side2;
                int three = hypo*hypo;
                if (one + two == three){
                    cout<< " Side 1: "<< side1 << " Side 2: "<< side2 << " Hypotenuse " << hypo;
                    cout<< "\n";
                }
            }
        }
    }
};

int main(){
    Pythagorean(250);
}