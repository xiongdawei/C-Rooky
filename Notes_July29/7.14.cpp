//
// Created by Mr.нет's   on 2019-07-29.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;
using std::cout;
using std::endl;
int rand_X(int );

int main(){
    srand((int)time(0));
    vector<int> Vec(0);
    for (int x{0};x<20;++x){
        Vec.push_back(rand_X(100));
    }
    cout<< "The Original Value";
    for (int element: Vec)
        cout<< element<<" ";

    cout<< "\n------After------:";
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
                if (Vec[a]==Vec[b]){
                    Vec[a] = 0;
                    ++b;
                }
                else{
                    ++b;
                }

            }
        }
    }
    for (int items: Vec)
        cout<< items<<" ";

}


int rand_X(int x){
    return rand()%x;
}