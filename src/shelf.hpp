#include "pallet.hpp"
#include <vector>

class Shelf{
    private:
        int id;
    public:
        std::vector<Pallet> planken;
        Shelf(int id);

        // int getShelf();

        std::vector<Pallet> getPallet();
        /// @brief getPallet Function. Gets de vector of pallets.
        /// @return Vector<Pallet>

        void setPallet(std::vector<Pallet> planken);
        /// @brief setPallet Function. Sets the vector of pallets.
        /// @param parameter-std::vector<Pallet> planken, the vector of pallets that gets set.

        int *  getSlotStatus();
        /// @brief getSlotStatus Function. Makes a array with true and false. false if slot is empty, true if slot in full. A shelf has a max of 4 pallets.
        /// @return array[4], with true of false. exam.{true,false,false,true}.

        std::string getSlotStatusString();
        /// @brief getSlotStatusString. Converts the slotStatus to a string to be easy to see.
        /// @return string of 1's or 0's. exam.("1001").

        bool removePallet(int slot);
        /// @brief removePallet Function. Removes a pallet form a shelf.
        /// @param parameter-slot determins with pallet in shelf to remove.
        /// @return true, if pallet has been removed.
        /// @return false, if pallet hasn't been removed.

        bool insertPallet(int slot, Pallet pallet);
        /// @brief insertPallet Function. insert selected pallet to shelf.
        /// @param parameter-slot ditermines where to insert pallet.
        /// @param parameter-pallet de selected pallet that get inserted into the shelf.
        /// @return true, if pallet is inserted.
        /// @return false, if pallet can not be inserted.

        bool isEmpty();
        /// @brief isEmpty Function. Cheks if pallet is empty.
        /// @return true, if pallet is empty.
        /// @return false, if pallet is not empty.

        bool isFUll();
        /// @brief isFull Function. Cheks if pallet is full.
        /// @return true, if pallet is full.
        /// @return false, if pallet is not full.





};