/*

Nadav Horowitz CS300 Data Structures
HW#1 - Abstract Bag - PlainBag.h

This file is the class "PlainBag".
PlainBag class overrides the pure virtual methods inherited from abstract class "Bag".
The file also contains public fields itemCount & items. 

*/
#include "Bag.h"

template<class T>
class PlainBag : public Bag<T> {

    //Public fields for PlainBag ADT, also inherited by MagicBag ADT
    public:
        int itemCount; //Tracks number of items in the bag
        T items[20]; //Holds the items in the bag, with maximum of 20 items


    //Constructor, initializes empty Bag
    PlainBag() {
        itemCount = 0;
    }

    //Inserts passed parameter item into Bag
    //Method inserts at the end of array
    virtual bool insert(T item){
        if (itemCount < 20){
            items[itemCount] = item;
            itemCount++;
            return false;
        }
        return true;
    }

    //Removes passed parameter item from Bag
    virtual bool remove(T item){
        if(contains(item)){//Checks bag for item to be removed
            int index = 0;

            T bagItem = items[index];//loops through array looking for item
            while(bagItem != item){
                index++;
                bagItem = items[index];
            }
            items[index] = items[itemCount-1];//replaces item to be removed
            itemCount--;                      //with the last item in the array
            return true;
        }
        return false;
    }
     
    //Query the Bag for if passed parameter item is in the bag, returns boolean value 
    virtual bool contains(T item){
        int howMany = count(item);
        return (howMany > 0)
    }

    //Query the Bag for how many copies of passed parameter item are in the Bag
    virtual int count(T item){
        int frequency = 0;

        for(int i = 0; i< itemCount; i++){
            if(item == items[i]){
                frequency++;                    
            }
        }
        return frequency;
    }

    //Returns whether the Bag is empty
    virtual bool isEmpty(){
        return (itemCount == 0);
    }

    //Returns whether the Bag is full
    virtual bool isFull(){
        return (itemCount == 20);
    }

    //Clears Bag of all contents
    virtual void clear(){
        itemCount = 0;
    }

    //Returns total number of items in Bag
    virtual int size(){
        return itemCount;
    }

    //Prints the contents of Bag to the console
    virtual void print(){
        cout << "[";

        for(int i = 0; i < itemCount - 1; i++){
            cout <<  items[i] << ", ";
        }
        if(itemCount > 0){
            cout << items[itemCount -1];
        }

        cout << "]";  
    }

};
