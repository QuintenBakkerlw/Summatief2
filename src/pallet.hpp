#include <string>
#include "IContainer.hpp"

class Pallet{
    private:
    // itemCount = only mutable through taking and putting
    // itemName = only mutable if empty ; itemCapacity only mutable if empty
        int  itemCount, itemCapacity; 
        std::string itemName;
    public:
        Pallet( int itemCount, int itemCapacity, std::string itemName);
        int getItemCount();
        /// @brief GetItemCount Function. Gets the itemCount from a pallet.
        /// @return int, number of items.

        int getItemCapacity();
        /// @brief GetItemCapacity Function. Gets the itemCapactiy from a pallet.
        /// @return int, the itemCapactiy of the pallet.

        std::string getItemName();
        /// @brief GetName Function, with this function you wil be able to get the name of the emplyee.
        /// @return string, returns name of pallet.
        
        bool reallocateEmptyPallet(std::string itemName, int itemCapacity);
        /// @brief reallocateEmptyPallet Function. Changes the pallet name an itemCapacity for a new product.
        /// @param parameter-itemName, the name that the new product has.
        /// @param parameter-itemCapacity, the new itemCapacity for the new product.
        /// @return true, if de reallocation worked.
        /// @return false, i fde reallocation failed.

        bool takeOne();
        /// @brief take one of the pallet items.
        /// @return true, if a item has been taken.
        /// @return false, if a item could not be taken.

        bool putONe();
        /// @brief put one item in de pallet.
        /// @return true, if a item has been put in.
        /// @return false, if a item could not be put in.

        bool isEmpty();
        /// @brief isEmpty Function. Checks if pallet is empty.
        /// @return true, if pallet is empty.
        /// @return false, if pallet is not empty.
        
        bool isFUll();
        /// @brief isFull Function. Cheks if pallet is full.
        /// @return true, if pallet is full.
        /// @return false, if pallet is not full.
};