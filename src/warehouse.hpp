#include "employee.hpp"
#include "shelf.hpp"
#include <vector>
class Warehouse{
    private:
        std::vector<Employee> employees;
        std::vector<Shelf> shelfs;
    public:
        void warehouse();

        std::vector<Employee> getEmployees();
        /// @brief GetEmployees Function. This function gives back a vector of al the employees.
        /// @return vector<Employee>,a vector of al the employees of the warehouse.

        std::vector<Shelf> getShelf();
        /// @brief getShelf Function. This function let you get a vector of all the shelfs in the warehouse.
        /// @return vector<Shelf>. returns a vector of all the shelf in the warehouse.

        int shelfNumber();
        /// @brief shelfNumber Function. This function count the number of shelf in the warehouse.
        /// @return int, returns the number of shelfs.

        std::string employeeList();
        /// @brief employeelist Function. This function makes a string of all the employees, this make it easy to see every employeer.
        /// @return string, returns a string of all the employees in the warehouse.

        void addEmployeer(Employee employee);
        /// @brief addEmployeer Function. This function adds en employee to the warehouse.
        /// @param parameter-employee the employee that is being added to the warehouse.

        void addshelf(Shelf shelf);
        /// @brief addshelf Function. This function add a shelf to de warehouse.
        /// @param parameter-shelf, shelf that need to be added to the warehouse.

        bool rearrangeShelf(Shelf& shelf, Employee& employee);
        /// @brief rearrangeShelf Function. This function sets the shelf in the row of low to high itemCapacity.
        /// @param parameter-shelf, the shelf that you want to rearrange.
        /// @param parameter-employee, the employee that is going to rearrange the shelf.

        bool pickItems(Shelf& shelf, std::string itemName, int itemCount);
        /// @brief pickItems Function. This function pick a x amourt of items from a selected pallet.
        /// @param parameter-shelf, the shelf that you want to pick the pallet from.
        /// @param parameter-itemName, the name of de item you want to pick.
        /// @param parameter-itemCount, the amount of items you want to pick from the selected pallet.
        /// @return true, if items could be picked.
        /// @return false, if items coudn't be picked.

};