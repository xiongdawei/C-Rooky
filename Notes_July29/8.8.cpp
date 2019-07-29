//
// Created by Mr.нет's   on 2019-07-29.
//
/*
 (Write C++ Statements) For each of the following, write C++ statements that perform the
specified task. Assume that unsigned integers are stored in four bytes and that the starting address of the built-in array is at location 1002500 in memory.
a) Declare an unsigned int built-in array values with five elements initialized to the even integers from 2 to 10. Assume that the constant size has been defined as 5.
b) Declare a pointer vPtr that points to an object of type unsigned int.
c) Use a for statement to display the elements of built-in array values using array sub-
script notation.
d) Write two separate statements that assign the starting address of built-in array values
to pointer variable vPtr.
e) Use a for statement to display the elements of built-in array values using pointer/offset
notation.
f) Use a for statement to display the elements of built-in array values using pointer/offset
notation with the built-in array’s name as the pointer.
g) Use a for statement to display the elements of built-in array values by subscripting the
pointer to the built-in array.
h) Refer to the fifth element of values using array subscript notation, pointer/offset nota-
tion with the built-in array name’s as the pointer, pointer subscript notation and point-
er/offset notation.
i) What address is referenced by vPtr + 3? What value is stored at that location?
j) Assuming that vPtr points to values[ 4 ], what address is referenced by vPtr -= 4?
What value is stored at that location?
 */
#include <array>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
using std::cout;
using std::endl;

int main(){
    array <int, 5> Array{2,4,6,8,10};
    int* vPtr = &Array[2];
    for (int x{0};x<5;++x){
        cout<< Array[x]<< " ";
    }

    int* vPrt{nullptr};
    vPrt = &Array[0];
    cout << "\n" << vPrt;

    int j{0};
    while(j<5){
        cout <<"\n"<< *vPrt;
        ++j;
        ++vPrt;
    }
    vPrt = &Array[0];
    for(int x{0};x<5;++x){
        cout<<"\n" << *vPrt;
        ++vPrt;
    }

    int x{0};
    int* numPrt = &x;
    for(int z{0};z<5;++z) {
        cout << "\n" << Array[*numPrt];
        *numPrt += 1;
    }

    *vPrt +=10;
    *numPrt +=5;

    cout<<"\n  " << Array[4];
    cout<<"\n  " << *vPrt;
    cout<<"\n  " << *numPrt;
    cout<<"\n  " << Array[*numPrt-5];
}














