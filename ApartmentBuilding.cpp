
#include "Unit.h"
class ApartmentBuilding {
private:
  int max_units;
  Unit *units = new Unit[max_units];
  int current_num = 0;

public:
  ApartmentBuilding()
      : max_units(10), units(new Unit[10]){}; // default constructor allocates
                                              // capacity for 10 units
  ApartmentBuilding(int capacity)
      : max_units(capacity),
        units(new Unit[capacity]){}; // constructor for ApartmentBuilding with
                                     // given capacity
  int get_Capacity() {
    return max_units;
  }; // returns the maximum number of units allowed

  // returns the current number of units in the apartment building
  int get_Current_Number_of_Units() { return current_num; };

  // returns a dynamic array of the units in the apartment building
  Unit *get_Contents() { return units; };

  // returns true and adds unit to the apartment if there is sufficient space
  // otherwise returns false
  bool add_Unit(Unit unit) {
    if (current_num < max_units) {
      units[current_num] = unit;
      current_num++;
      return true;
    } else {
      return false;
    }
  };

  // destructor
  ~ApartmentBuilding() { delete[] units; };
};
