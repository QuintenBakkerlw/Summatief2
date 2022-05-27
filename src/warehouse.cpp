#include "warehouse.hpp"
#include <algorithm>
#include <iostream>
using namespace std;


////////////////
// Construtor // 
void Warehouse::warehouse(){

}
/////////////////////////
// Get en Set functions // 
std::vector<Employee> Warehouse::getEmployees(){
    return employees;
}

std::vector<Shelf> Warehouse::getShelf(){
    return shelfs;
}
////////////////////////

int Warehouse::shelfNumber(){
    // Counts how many shelf there are in the warehouse.
    int shelfnumbers;
    for (auto v : getShelf()){
        shelfnumbers += 1;
    }
    return shelfnumbers;
}
///////////////////
// add functions //
void Warehouse::addEmployeer(Employee employee){
    employees.push_back(employee);
}
void Warehouse::addshelf(Shelf shelf){
    shelfs.push_back(shelf);
}

//////////////////

std::string Warehouse::employeeList(){
    std::string employeeList;
    // rotates through employees and get the name.
    // then adds them to a string.
    for (auto v : getEmployees()){
        employeeList += v.getName();
        employeeList += ",";
    }
    return employeeList;
}
bool Warehouse::rearrangeShelf(Shelf& shelf, Employee& employee){
    // checks if employee is avaliable.
    if (employee.getBusy() == true){
        return false;
    }
    int x = 0;
    std::vector<Pallet> vec = shelf.getPallet();
    std::vector<Pallet> newPallet;
    int h[4];
    // Checks if employee has a forklift certication.
    if (employee.getForkLiftCertifcate() == true){
        for (auto v : shelf.getPallet()){
            // puts every itemcapcity in an array of 4.
            h[x] = v.getItemCapacity();
            x = x + 1;
           
        }

        // sorts array
        sort(begin(h),end(h));

        // loops with a counter
        for (int i = 0; i < 10; i++){
            int count = 0;
            // looks in shelf with pallet has de same itemCapactiy
            for (auto v : shelf.getPallet()){
                if (h[i] == v.getItemCapacity()){
                    // to solve that two pallet have de same itemcapacity de pallet gets deleted after being used.
                    newPallet.push_back(v);
                    vec.erase(vec.begin()+count);
                }else{
                    continue;
                }
                count = count + 1;
            }
            // if pallet size is correct break and make old pallet the new pallet.
            if (newPallet.size() == 3){
                shelf.setPallet(newPallet);
                break;
            }
        }
        return true;
    }
    
  return false;  
}

bool Warehouse::pickItems(Shelf& shelf, std::string itemName, int itemCount){
    // is itemCount is negative return false.
    if (itemCount <= -1){
        return false;
    }

    // rotating in pallets checks if itemName and itemCount are correct.
    for (auto&  v : shelf.planken){
        if (v.getItemName() == itemName && v.getItemCount() >= itemCount){
                // cal takeon() every time a item need te be taken.
                for (int i = 0; i < itemCount + 1; i++){
                    v.takeOne();
                }
                return true; 
            }
            
        }
        return false;
    }

