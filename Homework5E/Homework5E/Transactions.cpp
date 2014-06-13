//
//  Transactions.cpp
//  Homework5E
//
//  Created by Drew Sears on 6/12/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include "Transactions.h"



Transactions:: Transactions()
    {
        ammount=0;
        balance=0;
    }
    

double Transactions:: getAmmount()
    {
        return ammount;
    }
    

void Transactions:: setAmmount(double ammount)
    {
        this->ammount=ammount;
    }


double Transactions:: getBalance()
    {
        return balance;
    }
    

void Transactions:: setBalance(double balance)
    {
        this->balance=balance;
    }

int Transactions:: getHistory()
    {
        return history;
    }



