//
//  Account.cpp
//  Homework5E
//
//  Created by Drew Sears on 6/12/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include "Account.h"

Account::Account()
{
    id = 0;
    balance= 0;
    annualInterestRate=0;
    //returns name
}



//returns name function

void Account::setID(int id)
{
    this->id= id;
}

int Account:: getID()
{
    return id;
}

void Account:: setBalance(int balance)
{
    this->balance= balance;
}

int Account:: getBalance()
{
    balance= balance - moneyWithdrawn + moneyDeposited;
    
    return balance;
}

void Account:: setAnnualInterestRate(double annualInterestRate)
{
    this->annualInterestRate= annualInterestRate;
}



double Account:: getMonthlyInterestRate()
{
    return annualInterestRate;
    
}

void Account:: withdraw(int moneyWithdrawn)
{
    this-> moneyWithdrawn= moneyWithdrawn;
    
}
void Account:: deposit(int moneyDeposited)
{
    this-> moneyDeposited= moneyDeposited;
}

void Account:: setName(string name)
{
    this->name= name;
}

string Account:: getName()
{
    return name;
}



