//
//  main.cpp
//  Homework5D
//
//  Created by Drew Sears on 6/11/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//12.20

#include <iostream>
#include <vector>//calls the vector library

using namespace std;

template<typename T>
void shuffle(vector<T> &v);//from the vector library

int main()
{
    vector<int> v;
    v.push_back(1);//push_back comes from vector library
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);//6 numbers for vector to shuffle
    
    shuffle(v);//function shuffle from below.
    
    
    
    
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    
    
    
    
}

template<typename T>
void shuffle(vector<T> &v)//called from the library
{
    srand(time(0));//randomizes the numbers
   
    for (int i = 0; i < v.size(); i++)
    {
        int index = rand() % v.size();
        T temp = v[index];//T temp declares the variable temp because of "T"
        v[index] = v[i];
        v[i] = temp;
    }
}

