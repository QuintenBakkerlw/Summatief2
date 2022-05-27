#include <string>

class Employee{
    private:
        std::string name; // immutable
        bool busy, forkLiftCertifcate;
    public:
        Employee(std::string name, bool busy, bool forkLiftCertifcate);
        std::string getName();
        /// @brief GetName Function, with this function you wil be able to get the name of the emplyee.
        /// @return returns name of empoyee

        bool getBusy();
        /// @brief GetBussy Function, with this function you wil be able to know if a empoyee is busy or not.
        /// @return false if employee is not busy.
        /// @return true if employee is busy.

        void setBusy(bool busy);
        /// @brief SetBusy Function. with this function you can change if the employee is busy or not.
        /// @param parameter-busy true of false determines if a empolyee is busy or not.

        bool getForkLiftCertifcate();
        /// @brief GetForkLiftCertifcate. with this function you wil be able to know if a employee has a forkliftcerticate.
        /// @return true if employee has forlliftcertifcate.
        /// @return false if employee doesn't have a forkliftcertifcate.

        void setForkLiftCertifcate(bool forkLiftCertifcate);
        /// @brief SetForkLiftCertifcate. With this fucntion you can change if a employee has a forkliftcertifcate.
        /// @param parameter-forkLiftCertifcate true of false determines if employee has a forkliftcertifcate.



};