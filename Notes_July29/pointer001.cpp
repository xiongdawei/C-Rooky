//
// Created by Mr.нет's   on 2019-07-25.
//

#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
using std::cout;
using std::endl;
/*
int main(){
    const size_t arraySize{5}; // must initialize in declaration
    array<int, arraySize> values;
    for (size_t i{0}; i<values.size();++i){
        values[i] = 2 + 2*i;
    }
    for (size_t j{0};j< values.size();++j){
        std::cout << setw(7) << j << setw(10) << values[j] << endl;
    }

}*/
// C++ provides no automatic array bounds checking to prevent you from referring to an element with it,
// calss templates array and vector each have an at function that perform

/*
int y{4};
int* yPtr = &y;


void cubeByReference(int *);

int main(){
    int a{21};
    cout<<"the number is a";
    cout<< "\n the place is " << &a;

    cout<< "\n THe place of y is " << yPtr;
    int number{5};
    cout<< "The Original Value"<< number;
    cubeByReference(&number);
    cout<<"\n The new value of number is" << number;
}

void cubeByReference(int* nPtr){
    *nPtr = *nPtr * *nPtr * *nPtr;
}
*/

size_t getSize(double*);

int main(){
    double numbers[20];
    cout<< "The number of bytes in the array is" << sizeof(numbers);
    cout<< "\n The number of bytes return by the getSize is " << getSize(numbers); // 20 doubles, occupy 160 bytes on our system

}

size_t getSize(double* ptr){
    return sizeof(ptr);
}