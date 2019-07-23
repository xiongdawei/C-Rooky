//
// Created by Mr.нет's   on 2019-07-21.
//

// Account class with name and balance data members, and a constructor and deposit function that each perform validation.
#include <string>
#include <iostream>

class Account{
public:
    Account(std::string accountName, int initialBalance):name{accountName}{
        if (initialBalance >0){
            balance = initialBalance;
        }
    }

    void deposit(int depositAmount){
        if (depositAmount>0){
            balance = balance + depositAmount;
        }
    }

    int getBalance() const{
        return balance;
    }

    std::string getName() const{
        return name;
    }
private:
    std::string name; // account name data member
    int balance{0}; //data member with default initial value
};