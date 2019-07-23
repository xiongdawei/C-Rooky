//
// Created by Mr.нет's   on 2019-07-23.
//

#include <vector>
#include <iostream>
using namespace std;


int largest(){
    int i{0};
    vector<int>list;
    while (i<5)
    {
        int a;
        std::cout << "Please input a number";
        std::cin >> a;
        list.push_back(a);
        i++;
    }
    sort(list.begin(),list.end());
    int pointer = list.size();
    std::cout << list[pointer-1] << std::endl;
    std::cout << list[pointer-2] << std::endl;



}

int largest();

int main(){
    largest();

}
