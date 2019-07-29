//
// Created by Mr.нет's   on 2019-07-29.
//

#include <array>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_X(int );

using namespace std;
using std::cout;
using std::endl;

int main(){
    array<int, 20> Array;
    srand((int)time(0));
    int x;
    int j;
    for (x=0;x<20;x++)
        Array[x] = rand_X((100));
    cout << "The original array is: ";
    for (int item: Array)
        cout<<item<<" ";
    cout << "\nAfter eliminate the  : ";
    int a{0};
    int b{0};
    while (a<20){
        ++a;
        while (b<20){
            if (a==b){
                ++b;
                continue;
            }
            else{
                if (Array[a]==Array[b]){
                    Array[a] = 0;
                    ++b;
                }
                else{
                    ++b;
                }

            }
        }
    }
    for (int items: Array)
        cout<< items<<" ";

}

int rand_X(int x){
    return rand()%x;
}