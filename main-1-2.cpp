#include "ApartmentBuilding.h"
#include "Unit.h"
#include <iostream>
using namespace std;
int main() {
  ApartmentBuilding appartment(5);
  Unit s1;
  bool a = appartment.add_Unit(s1);
  cout << a << endl;
  cout << appartment.get_Capacity() << endl;
  cout << appartment.get_Contents() << endl;
  cout << appartment.get_Current_Number_of_Units() << endl;
}
