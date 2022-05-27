#define CATCH_CONFIG_MAIN

#include <iostream>
#include "include/catch.hpp"
// #include "../src/employee.hpp"
// #include "../src/shelf.hpp"
// #include "../src/pallet.hpp"
#include "../src/warehouse.hpp"

using namespace std;

TEST_CASE("The constructor actually assigns the provide values to the attributes",
          "Vector constructor"){;


////////// test cases /////////
// 0 = Employee testing ring
// 1 = Shelfs testing ring
// 2 = Pallet testing ring
// 3 = warehouse testing ring
//////////////////////////////

///////////////////////////////////
////// Employee testing ring //////

    Employee p1 = Employee("dave", false, true);
    Employee p2 = Employee("henk", false, false);
    Employee p3 = Employee("joris", true, false);
    Employee p4 = Employee("chantel", true, true);

    REQUIRE(p1.getForkLiftCertifcate() == true);
    REQUIRE(p2.getForkLiftCertifcate() == false);
    REQUIRE(p3.getForkLiftCertifcate() == false);
    REQUIRE(p4.getForkLiftCertifcate() == true);

    REQUIRE(p1.getBusy() == false);
    REQUIRE(p2.getBusy() == false);
    REQUIRE(p3.getBusy() == true);
    REQUIRE(p4.getBusy() == true);

    REQUIRE(p1.getName() == "dave");
    REQUIRE(p2.getName() == "henk");
    REQUIRE(p3.getName() == "joris");
    REQUIRE(p4.getName() == "chantel");

    p1.setBusy(true);
    p2.setForkLiftCertifcate(true);

    REQUIRE(p1.getBusy() == true);
    REQUIRE(p2.getForkLiftCertifcate() == true);




////////////////////////////////    
////// Shelf testing ring //////

    // Shelf s1 = Shelf(1);
    // Shelf s2 = Shelf(2);
    // Shelf s3 = Shelf(3);
    // Shelf s4 = Shelf(4);
    // Pallet p1 = Pallet(5,6,"tv's");
    // Pallet p2 = Pallet(1,4,"wheels");
    // Pallet p3 = Pallet(10,20,"balls");
    // Pallet p4 = Pallet(6,6,"cars");
    // Pallet p5 = Pallet(8,200,"rtx3090");

    // REQUIRE(s1.isEmpty() == true);
    // REQUIRE(s1.isFUll() == false);
    // REQUIRE(s1.getSlotStatusString() == "0000");
    // REQUIRE(s1.insertPallet(1,p1) == true);
    // REQUIRE(s1.getSlotStatusString() == "1000");
    // REQUIRE(s1.isEmpty() == false);
    // REQUIRE(s1.removePallet(1) == true);
    // REQUIRE(s1.getSlotStatusString() == "0000");
    // REQUIRE(s1.removePallet(1) == false);
    // REQUIRE(s1.getSlotStatusString() == "0000");
    // REQUIRE(s1.insertPallet(2,p2) == true);
    // REQUIRE(s1.insertPallet(1,p3) == true);
    // REQUIRE(s1.isFUll() == false);
    // REQUIRE(s1.isEmpty() == false);
    // REQUIRE(s1.insertPallet(2,p4) == true);
    // REQUIRE(s1.insertPallet(4,p5) == true);
    // REQUIRE(s1.getSlotStatusString() == "1111");
    // REQUIRE(s1.isFUll() == true);
    // REQUIRE(s1.insertPallet(4,p5) == false);
    // REQUIRE(s1.removePallet(1) == true);
    // REQUIRE(s1.removePallet(4) == false);
    // REQUIRE(s1.removePallet(1) == true);



    
/////////////////////////////////
////// Pallet testing ring //////

    // Pallet p1 = Pallet(5,6,"tv's");
    // Pallet p2 = Pallet(1,4,"wheels");
    // Pallet p3 = Pallet(10,20,"balls");
    // Pallet p4 = Pallet(6,6,"cars");

    // REQUIRE(p1.getItemCount() == 5);
    // REQUIRE(p2.getItemCount() == 1);
    // REQUIRE(p3.getItemCapacity() == 20);
    // REQUIRE(p4.getItemCapacity() == 6);

    // p1.takeOne();
    // REQUIRE(p1.getItemCount() == 4);

    // p2.takeOne();
    // REQUIRE(p2.getItemCount() == 0);
    // REQUIRE(p2.takeOne() == false);

    // REQUIRE(p4.putONe() == false);
    // p4.takeOne();
    // REQUIRE(p4.getItemCount() == 5);

    // REQUIRE(p2.getItemCount() == 0);
    // REQUIRE(p2.reallocateEmptyPallet("wheels", 12) == true);




////////////////////////////////////
////// Warehouse testing ring //////

    // Warehouse w1;
    // Employee p1 = Employee("dave", false, true);
    // Employee p2 = Employee("henk", false, false);
    // Employee p3 = Employee("joris", true, false);
    // Employee p4 = Employee("chantel", true, true);
    // Shelf s1 = Shelf(1);
    // Shelf s2 = Shelf(2);
    // Shelf s3 = Shelf(3);
    // Shelf s4 = Shelf(4);
    // Pallet pa1 = Pallet(5,6,"tv's");
    // Pallet pa2 = Pallet(1,4,"wheels");
    // Pallet pa3 = Pallet(10,20,"balls");
    // Pallet pa4 = Pallet(6,6,"cars");
    // Pallet pa5 = Pallet(8,200,"rtx3090");

    // s1.insertPallet(1,pa1);
    // s1.insertPallet(1,pa2);
    // s1.insertPallet(1,pa3);
    // s1.insertPallet(1,pa4);

    
    // w1.addEmployeer(p1);
    // w1.addEmployeer(p2);
    // w1.addEmployeer(p3);
    // w1.addEmployeer(p4);
    // w1.addshelf(s1);
    // w1.addshelf(s2);
    // REQUIRE(w1.employeeList() == "dave,henk,joris,chantel,");
    // REQUIRE(w1.shelfNumber() == 2);
    // REQUIRE(w1.pickItems(s1, "balls", 10) == true);
    // REQUIRE(w1.pickItems(s1, "balls", 5) == false);
    // REQUIRE(w1.rearrangeShelf(s1, p4) == false);
    // REQUIRE(w1.rearrangeShelf(s1, p1) == true);
    // REQUIRE(s1.removePallet(1) == true);


    

    


    

}

