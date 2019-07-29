//
// Created by Mr.нет's   on 2019-07-29.
//
#include <iostream>
#include <array>
using namespace std;
using std::cout;
using std::endl;

int main(){

    int iArr[5];
    double dArr[]{1.1,2.2,3.3,4.4,5.5};

    int* iPtr = &iArr[0];
    double* dPtr = &dArr[0];

    void* vArr[5];

    vArr[0] = reinterpret_cast<void*>(iPtr);
    vArr[1] = reinterpret_cast<void*>(dPtr);

    cout<<*(reinterpret_cast<int*>(vArr[0]));
    return 0;
    
}

