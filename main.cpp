#include <iostream>
#include "src/warehouse.hpp"
using namespace std;


int main(){
    // the warehouse.
    Warehouse w1;

    // the employees
    Employee p1 = Employee("dave", false, true);
    Employee p2 = Employee("henk", false, false);
    Employee p3 = Employee("joris", true, false);
    Employee p4 = Employee("chantel", true, true);

    // avaliable shelfs.
    Shelf s1 = Shelf(1);
    Shelf s2 = Shelf(2);
    Shelf s3 = Shelf(3);

    // pallets with different items.
    Pallet pa1 = Pallet(4,  8,  "tv's");
    Pallet pa2 = Pallet(1,  10, "schoenen");
    Pallet pa3 = Pallet(15, 25, "rtx3090");
    Pallet pa4 = Pallet(0,  17, "laptops");
    Pallet pa5 = Pallet(20, 20, "honden");

    // your turn to be a warehouse manager!!

    /////////////
    // example //
    w1.addEmployeer(p1);
    w1.addshelf(s1);
    s1.insertPallet(1, pa5);
    pa4.reallocateEmptyPallet("iphones", 250);

    ////////////
    
    

    return 0;  


}