
class Unit {
public:
  // a default constructor
  Unit() : bedroom_numbers(0), value(0), area(0.0){};
  // a constructor that takes: the value, number of bedrooms, and the size
  Unit(int unit_val, int num_beds, double unit_size)
      : bedroom_numbers(num_beds), value(unit_val), area(unit_size) {
    if (unit_val < 0) {
      value = 0;
    };
    if (num_beds < 0) {
      bedroom_numbers = 0;
    };
    if (unit_size < 0) {
      area = 0;
    }
  };
  int get_Num_Bedrooms() {
    return bedroom_numbers;
  }; // returns the number of bedrooms for the unit
  int get_Value() { return value; }; // returns the value in dollars of the Unit
  double get_Area() {
    return area;
  }; // returns the number of square meters in the unit
private:
  int bedroom_numbers;
  int value;
  double area;
};
