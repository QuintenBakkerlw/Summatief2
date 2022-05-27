#include "shelf.hpp"
#include <iostream>
#include <algorithm>
using namespace std;

Shelf::Shelf(int id){
    this->id = id;
}

std::vector<Pallet> Shelf::getPallet(){
    return planken;
}

void Shelf::setPallet(std::vector<Pallet> planken){
    this->planken = planken;
}
// int Shelf::getShelf(){
//     return id;
// }
int * Shelf::getSlotStatus(){
    static int slotStatus [4];
    for (int i = 0;  i < 4 ; i ++){
        if (i < planken.size()){
            slotStatus[i] = true;
        }else{
            slotStatus[i] = false;
        }
        
    }
    return slotStatus;
}

std::string Shelf::getSlotStatusString(){
    int* slotstat = getSlotStatus();
    std::string stringStat;
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
    if (isEmpty() == true){
        return false;
    }
    int* status = getSlotStatus();
    if ( status[slot - 1] == true){
        planken.erase(planken.begin()+slot);
        return true;
    }else{
        return false;
    }
    
}

bool Shelf::insertPallet(int slot, Pallet pallet){
    if (isFUll() == true){
        return false;
    }
    int * status = getSlotStatus();
    if (planken.size() != 4 || status[slot - 1] == false){
        planken.push_back(pallet);
        return true;
    }else{
        return false;
    }
    
}

bool Shelf::isFUll(){
    if(planken.size() == 4){
        return true;
    }else{
        return false;
    }
}
bool Shelf::isEmpty(){
    if(planken.size() == 0){
        return true;
    }else{
        return false;
    }

}