#include <cmath>
#include <iostream>

class MyHour{
public:
  MyHour(int hour){
    if (0 <= hour && hour <= 23) myHour = hour;
    else myHour = 0;
    std::cout << "myHour = " << myHour << std::endl;
  }

  MyHour(): MyHour(0){}

  MyHour(double hour):MyHour(static_cast<int>(ceil(hour))) {}

private:
  int myHour;
};

int main(){

  std::cout << std::endl;

  MyHour(10);
  MyHour(100);
  MyHour();
  MyHour(22.45);

  std::cout << std::endl;

}

// In this example, the constructor in line 6 is responsible for creating a myHour object, whereas the other constructors simply call it in their initializer lists.

// The constructors in lines 12 and 14 do not require a code in their body since they are simply creating a myHour object with the specified integer value. For this, all they need to do is delegate the task to the first constructor.