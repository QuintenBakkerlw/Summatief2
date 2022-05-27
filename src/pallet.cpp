#include "pallet.hpp"
#include <iostream>
using namespace std;
/////////////////
// Constructor // 

Pallet::Pallet(int itemCount, int itemCapacity, std::string itemName){
    this-> itemCount = itemCount;
    this->itemCapacity = itemCapacity;
    this-> itemName = itemName;

}

/////////////////////////
// Get en Set functions //

int Pallet::getItemCount(){
    return itemCount;
}
int Pallet::getItemCapacity(){
    return itemCapacity;
}
std::string Pallet::getItemName(){
    return itemName;
}

//////////////////////////

bool Pallet::reallocateEmptyPallet(std::string itemName, int itemCapacity){
    // Checks if pallet is empty then reallocates pallet.
    if (itemCount == 0){
        this->itemName = itemName;
        this->itemCapacity = itemCapacity;
        return true;
    }
    return false;

}


bool Pallet::takeOne(){
    // Checks if pallet is empty.
    if (isEmpty() == true){
        return false;
    }
    // if itemCount is greater then 0 dan take 1 item.
    if (itemCount > 0){
        this->itemCount = itemCount- 1;
        return true;
    }
    return false;

}
bool Pallet::putONe(){
    // Checks if pallet is full.
    if (isFUll() == true){
        return false;
    }
    // if itemCount is smaller dan itemCapacity then add 1 item.
    if (itemCount < itemCapacity){
        this->itemCount = itemCount + 1;
        return true;
    }
    return false;
}


bool Pallet::isFUll(){
    // Checks if pallet is full.
    if(itemCount == itemCapacity){
        return true;
    }else{
        return false;
    }
}
bool Pallet::isEmpty(){
    // Checks if pallet is empty.
    if(itemCount == 0){
        return true;
    }else{
        return false;
    }

}