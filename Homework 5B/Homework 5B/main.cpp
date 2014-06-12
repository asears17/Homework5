//
//  main.cpp
//  Homework 5B
//
//  Created by Drew Sears on 6/10/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//12.4

#include <iostream>
#include <string>
using namespace std;

template<typename T>
bool working(const T list[], int size)
{
    for (int i=0; i<size - 1; i++)
        if (list[i]>list [ i+ 1])
            return false;

    return true;
        
}




int main()
{
    int list[]= {1,3,4,5,6,7,8,9,5,4,3,33,7,7,89,8};
    
    cout << "Does the int list work? " << (working(list, 6) ? "true" : "false")<< endl;
    
    double list2[]= {2.2,4.4,55.6,3.6,6.22};
    
    cout << "Does the double list work " << (working(list2, 4) ? "true" : "false") << endl;
    
    string list3[] = {"abc", "bva", "gadfg"};
    
    cout << "Does the string list work " << (working(list3, 3)? "true": "false") << endl;

    return 0;
}

