#include "pallet.hpp"
#include <iostream>
using namespace std;

Pallet::Pallet(int itemCount, int itemCapacity, std::string itemName){
    this-> itemCount = itemCount;
    this->itemCapacity = itemCapacity;
    this-> itemName = itemName;

}
int Pallet::getItemCount(){
    return itemCount;
}
int Pallet::getItemCapacity(){
    return itemCapacity;
}
std::string Pallet::getItemName(){
    return itemName;
}

bool Pallet::reallocateEmptyPallet(std::string itemName, int itemCapacity){
    if (itemCount == 0){
        this->itemName = itemName;
        this->itemCapacity = itemCapacity;
        return true;
    }
    return false;

}

bool Pallet::takeOne(){
    if (isEmpty() == true){
        return false;
    }
    if (itemCount > 0){
        this->itemCount = itemCount- 1;
        return true;
    }
    return false;

}
bool Pallet::putONe(){
    if (isFUll() == true){
        return false;
    }
    if (itemCount < itemCapacity){
        this->itemCount = itemCount + 1;
        return true;
    }
    return false;
}

bool Pallet::isFUll(){
    if(itemCount == itemCapacity){
        return true;
    }else{
        return false;
    }
}
bool Pallet::isEmpty(){
    if(itemCount == 0){
        return true;
    }else{
        return false;
    }

}