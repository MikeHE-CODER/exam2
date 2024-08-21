#include "Unit.h"
#include <iostream>
using namespace std;
int main() {
  Unit s1;
  Unit s2 = {1, 2, 3.0};
  cout << s1.get_Num_Bedrooms() << endl;
  cout << s1.get_Area() << endl;
  cout << s1.get_Value() << endl;
  cout << s2.get_Num_Bedrooms() << endl;
  cout << s2.get_Area() << endl;
  cout << s2.get_Value() << endl;
}
