//
// Created by Mr.нет's   on 2019-07-22.
//

#include <cstdlib>
#include <iostream>
#include <vector>

int calculate(int end){
    int count{0};
    int i{1};
    while (i<end+1){
        count += i;
        i++;
    }
    return count;

}

