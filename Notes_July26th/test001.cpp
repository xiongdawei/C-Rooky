//
// Created by Mr.нет's   on 2019-07-29.
//

#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
using std::cout;
using std::endl;

int main(){
    array<int, 5> items{1,2,3,4,5};
    cout<<"items before modification: ";
    for (int item: items){
        cout<<item<< " ";
    }

    for (int& itemRef: items){
        itemRef *=2;
    }
    cout<< "\n items after modification: ";
    for (int item: items){
        cout << item << " ";
    }
}