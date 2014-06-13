//
//  main.cpp
//  Homework5E
//
//  Created by Drew Sears on 6/12/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include <iostream>
#include "Account.h"

using namespace std;


int main()
{
    cout << "BECU account information " << endl;
    Account account;
    account.setID(1122);
    account.setBalance(20000);
    account.setAnnualInterestRate(4.5);
    
    account.withdraw(2500);
    account.deposit(3000);
    
    cout << "Balance is " << account.getBalance() << " $ " << endl;
    cout << "Monthly Interest Rate is " << account.getMonthlyInterestRate() << " %" << endl;;
    
    cout<< "Transaction Report: " << endl;
    

    
}

