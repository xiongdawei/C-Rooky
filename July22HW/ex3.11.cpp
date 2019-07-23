//
// Created by Mr.нет's   on 2019-07-23.
//

#include <iostream>
#include <string>

class Employee{
public:
    void setF(std::string fir);
    void setL(std::string las);
    void setS(int sal);
    int get();

private:
    std::string first_name;
    std::string last_name;
    int salary;
};

void Employee::setF(std::string fir){
    first_name = fir;
}

void Employee::setL(std::string las){
    last_name = las;
}
void Employee::setS(int sal){
    salary = sal;
}

int Employee::get(){
    return salary;
}



int main(){
    Employee david;
    david.setF("Dawei");
    david.setL("Xiong");
    david.setS(20);
    std::cout << david.get() << std::endl;

    return 0;
};