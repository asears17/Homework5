//
//  main.cpp
//  Homework5A
//
//  Created by Drew Sears on 6/10/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

template<typename T>
int linearSearch(T list [], int key, int arraySize)
{
    for (int i=0; i<arraySize; i++)
    {
        if (key== list[i])
            return i;
        
    }
    return -1;
}



int main()
{
    int intArray [] = {1,2,34,66,77,88};
    
    cout << "linearSearch (3,8) is " << linearSearch(intArray, 3,8)<< endl;
    
    return 0;

  
}

