/*

Nadav Horowitz CS300 Data Structures
HW#1 - Abstract Bag - Bag.h

This file is the abstract class "Bag".
This file contains only pure virtual functions which will be implemented
in the inheriting class "PlainBag".

*/
#ifndef BAG_H
#define BAG_H
#include <iostream>
using namespace std;

template <class T>
class Bag {

     //public pure virtual methods to be inherited and implemented by PlainBag
     public:
          virtual bool insert(T item) = 0;
          virtual bool remove(T item) = 0;
          virtual bool contains(T item) = 0;
          virtual int count(T item) = 0;
          virtual bool isEmpty() = 0;
          virtual bool isFull() = 0;
          virtual void clear() = 0;
          virtual int size() = 0;
          virtual void print() = 0;
    
};

#endif