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

std::string functiona(int max){
    for(int init{1};init<max+1;++init){
        int inter = init;
        while (inter>0){
            cout<<"*";
            --inter;
        }
        cout<<"\n";
    }
};

std::string functionb(int max){
    for(int init = max+1;init>0;--init){
        int inter = init;
        while (inter>0){
            cout<<"*";
            --inter;
        }
        cout<<"\n";
    }
};

std::string functionc(int max){
    for (int init{1};init<max+1;++init){
        int inter = init;
        cout<<setw(init);
        int count = max-inter;
        while (count>0){
            cout<<"*";
            --count;
        }
        cout<<"\n";
    }
};

std::string functiond(int max){
    for(int init = max;init>0;--init){
        int inter = init;
        cout<<setw(inter);
        int count = max-inter;
        while (count>0){
            cout<<"*";
            --count;
        }
        cout<<"\n";
    }
};


int main(){
    functiona(10);
    functionb(1);
    functionc(2);
    functiond(6);
}