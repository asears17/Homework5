//
//  main.cpp
//  Homework 5C
//
//  Created by Drew Sears on 6/11/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
template<typename T>
class TheVector{
public:
    //the "void" vectors
    TheVector();
    void pop_back();
    void push_back(T element);
    void clear();
    void swap (TheVector v2);
    
    //the "const" vectors
    unsigned int size();
    T at(int index);
    bool empty();
    
    int vectorSize;
    T elements[100];


    
};

template <typename T>//returns vector size;
TheVector<T>::TheVector()
{
    vectorSize = 0;
}

template<typename T>//returns true of false of vector
bool TheVector<T>::empty()
{
    return (vectorSize==0);
}

template<typename T>
void TheVector<T>::pop_back()
{
    return elements[--vectorSize];
    
}

template<typename T>
void TheVector<T>::push_back(T value)
{
    elements[vectorSize++] = value;
}

template<typename T>
void TheVector<T>::swap(TheVector v2)
{
    T vec[100];
    int vecSize = v2.size();
    for (int i = 0; i < v2.size(); i++)
        vec[i] = v2.at(i);
    
    v2.clear();
    for (int i = 0; i < size(); i++)
        v2.push_back(at(i));
    
    clear();
    for (int i = 0; i < vecSize; i++)
        push_back(vec[i]);
}

template<typename T>
void TheVector<T>::clear()
{
    vectorSize = 0;
    
}

template<typename T>
unsigned int TheVector<T>::size()
{
    return vectorSize;
}

template<typename T>
T TheVector<T>::at(int index)
{
    return elements[index];
}


int main()
{
    TheVector<int> v1;//find out what this means.
    v1.push_back(1);
    v1.push_back(2);
    
    TheVector<int> v2;
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    
    v1.swap(v2);
    
    for (int i = 0; i < v1.size(); i++)
        cout << v1.at(i) << " ";
    

   
}

