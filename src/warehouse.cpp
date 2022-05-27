#include "warehouse.hpp"
#include <algorithm>
#include <iostream>
using namespace std;

void Warehouse::warehouse(){

}

std::vector<Employee> Warehouse::getEmployees(){
    return employees;
}

std::string Warehouse::employeeList(){
    std::string employeeList;
    for (auto v : getEmployees()){
        employeeList += v.getName();
        employeeList += ",";
    }
    return employeeList;
}

std::vector<Shelf> Warehouse::getShelf(){
    return shelfs;
}
int Warehouse::shelfNumber(){
    int shelfnumbers;
    for (auto v : getShelf()){
        shelfnumbers += 1;
    }
    return shelfnumbers;
}

void Warehouse::addEmployeer(Employee employee){
    employees.push_back(employee);


}
void Warehouse::addshelf(Shelf shelf){
    shelfs.push_back(shelf);

}
bool Warehouse::rearrangeShelf(Shelf& shelf, Employee& employee){
    int x = 0;
    std::vector<Pallet> vec = shelf.getPallet();
    std::vector<Pallet> newPallet;
    int h[4];
    if (employee.getForkLiftCertifcate() == true){
        for (auto v : shelf.getPallet()){
            h[x] = v.getItemCapacity();
            x = x + 1;
           
        }

        sort(begin(h),end(h));

        for (int i = 0; i < 10; i++){
            int count = 0;
            for (auto v : shelf.getPallet()){
                if (h[i] == v.getItemCapacity()){
                    newPallet.push_back(v);
                    vec.erase(vec.begin()+count);


                }else{
                    continue;
                }
                count = count + 1;
            }
            if (newPallet.size() == 3){
                break;
            }
        }
        return true;
    }
    
  return false;  
}

bool Warehouse::pickItems(Shelf& shelf, std::string itemName, int itemCount){
    if (itemCount <= -1){
        return false;
    }
    for (auto&  v : shelf.planken){
        if (v.getItemName() == itemName && v.getItemCount() >= itemCount){
                for (int i = 0; i < itemCount + 1; i++){
                    v.takeOne();
                }
                return true; 
            }
            
        }
        return false;
    }

