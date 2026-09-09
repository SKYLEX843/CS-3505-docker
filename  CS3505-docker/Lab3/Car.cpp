#include <iostream>

class Car {
  double speed;

public:
  Car(double speed): speed(speed) {}

  void drive() {
    std::cout << "Zooming " << speed << " mph."<< std::endl;
  }

  void slow() {
    speed = speed / 2;
  }

  void speedUp() {
    speed = speed * 1.5;
  }
};


int main() {
  Car myCar(10.0);
  myCar.drive();
  myCar.slow();
  myCar.drive();
}
