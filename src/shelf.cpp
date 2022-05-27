#include "shelf.hpp"
#include <iostream>
#include <algorithm>
using namespace std;
////////////////
// Construtor //

Shelf::Shelf(int id){
    this->id = id;
}

/////////////////////////
// Get en Set functions //

std::vector<Pallet> Shelf::getPallet(){
    return planken;
}

void Shelf::setPallet(std::vector<Pallet> planken){
    this->planken = planken;
}
int Shelf::getShelf(){
    return id;
}

/////////////////////////

int * Shelf::getSlotStatus(){
    // makes a static array
    static int slotStatus [4];
    // loops in vector planken.
    for (int i = 0;  i < 4 ; i ++){
        // if i is smaller en de size of planken then add true to array.
        if (i < planken.size()){
            slotStatus[i] = true;
        }else{
            slotStatus[i] = false;
        }
        
    }
    return slotStatus;
}

std::string Shelf::getSlotStatusString(){
    // calls getSlotStatus
    int* slotstat = getSlotStatus();
    std::string stringStat;
    // Checks if element in array is true of false. (1 = true, 0 = false)
    for (int i = 4 - 1; i >= 0; i--){
        if (slotstat[i] == true){
            stringStat += "1";

        }else{
            stringStat += "0";
        }
    } 
    reverse(stringStat.begin(),stringStat.end());
    return stringStat;
}

bool Shelf::removePallet(int slot){
    // Checks if there are any pallets.
    if (isEmpty() == true){
        return false;
    }

    int* status = getSlotStatus();
    // Checks if Pallet exist.
    if ( status[slot - 1] == true){
        // removes pallet.
        planken.erase(planken.begin()+slot);
        return true;
    }else{
        return false;
    }
    
}

bool Shelf::insertPallet(int slot, Pallet pallet){
    // Checks if shelf is full.
    if (isFUll() == true){
        return false;
    }
    int * status = getSlotStatus();
    // If shelf is not full and slot is free then insert pallet.
    if (planken.size() != 4 || status[slot - 1] == false){
        planken.push_back(pallet);
        return true;
    }else{
        return false;
    }
    
}

bool Shelf::isFUll(){
    // Checks if shelf is full.
    if(planken.size() == 4){
        return true;
    }else{
        return false;
    }
}
bool Shelf::isEmpty(){
    // Checks if shelf is empty.
    if(planken.size() == 0){
        return true;
    }else{
        return false;
    }

}