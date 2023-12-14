/*

Nadav Horowitz CS300 Data Structures
HW#1 - Abstract Bag - MagicBag.h

This file is the class "MagicBag".
MagicBag class inherits all the fields and methods included in "PlainBag".
MagicBag overrides the inherited print() method.

*/
#include "PlainBag.h"

template<class T>
class MagicBag : public PlainBag<T> {

     //Prints MagicBag is empty, regardless of MagicBag's actual contents. Overrides "PlainBag"'s print()
     void print(){
          cout << "[]";  
     }

};