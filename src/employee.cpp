#include "employee.hpp"

// Get en Set Functies //
std::string Employee::getName(){
    return name;
}
bool Employee::getBusy(){
    return busy;
}
void Employee::setBusy(bool busy){
    this->busy =  busy;
}
bool Employee::getForkLiftCertifcate(){
    return forkLiftCertifcate;
}
void Employee::setForkLiftCertifcate(bool forkLiftCertifcate){
    this->forkLiftCertifcate = forkLiftCertifcate;
}

/////////////////
// Constructor // 
Employee::Employee(std::string name, bool busy, bool forkLiftCertifcate){
    this->name = name;
    this->busy = busy;
    this->forkLiftCertifcate = forkLiftCertifcate;

}