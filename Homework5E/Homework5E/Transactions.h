//
//  Transactions.h
//  Homework5E
//
//  Created by Drew Sears on 6/12/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#ifndef __Homework5E__Transactions__
#define __Homework5E__Transactions__

#include <iostream>
#include <string>
using namespace std;

class Transactions{
public:
    
    Transactions();
    
    double getAmmount();
    
    void setAmmount(double ammount);
    
    
    double getBalance();
    
    
    void setBalance(double balance);
    
    int getHistory();
    
private:
    double ammount;
    double balance;
    string description;
    int history;
};


#endif /* defined(__Homework5E__Transactions__) */
