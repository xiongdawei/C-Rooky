//
// Created by Mr.нет's   on 2019-07-25.
//
/*We specify the name of the array and the position number of the particular element in the array
 * the position number is more formally called a subscript or index
 * the first element has subscript 0
 * the zeroth element
 * */

#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
using std::cout;
using std::endl;


//array <type, arraySize> arrayName
// size_t represents an unsigned integral value
// size_t is defined in the std namespace and is in header <cstddef>, which is included by various ohter headers


int main(){
    array<int,5>n{32,47,53,28,97}; // n is an array of 5 int values
    // initialize elements of array n to 0
    cout << "Element: " << n[3] << " Value" << endl;
    for (size_t i{0}; i<n.size();++i){
        // setw set with
        // setw is to leave some blank space
        cout<< setw(7) << i<<setw(10)<<n[i]<<endl;
    }


}