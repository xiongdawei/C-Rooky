//
// Created by Mr.нет's   on 2019-07-31.
//
#include <iostream>

using namespace std;
using std::cout;
using std::endl;

class Count{
    friend void setX(Count&, int);
public:
    int getX() const {return x;}
private:
    int x{0};
};

void setX(Count& c, int val){
    c.x = val;
}

int main(){
    Count counter;
    cout << "counter.x after instantiation: " << counter.getX();
    setX(counter, 8);
    cout << "\n"<<"counter. after all to setX friend function: " << counter.getX();

}