//
//  Account.h
//  Homework5E
//
//  Created by Drew Sears on 6/12/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#ifndef __Homework5E__Account__
#define __Homework5E__Account__

#include <iostream>
#include <string>
using namespace std;
#endif /* defined(__Homework5E__Account__) */
class Account{
public:
    string name;
    Account();
    
    
    
    //returns name function
    
    void setID(int id);
    
    int getID();
    
    void setBalance(int balance);
    
    int getBalance();
    
    void setAnnualInterestRate(double annualInterestRate);
    
    
    
    double getMonthlyInterestRate();
    
    void withdraw(int moneyWithdrawn);
    
    void deposit(int moneyDeposited);
    
    void setName(string name);
    
    string getName();
      
    
    
    
private:
    int id;
    double balance;
    static double annualInterestRate;
    double moneyWithdrawn;
    double moneyDeposited;
    
};
