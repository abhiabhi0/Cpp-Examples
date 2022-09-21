#include <iostream>
#include <string>

class Abstract{
public:
    virtual ~Abstract() = 0;
};

Abstract::~Abstract(){}

class Concret: public Abstract{};

class HumanBeing{
public:
  HumanBeing(const std::string n): name(n){
    std::cout << name << " created." <<  std::endl;
  }

  virtual std::string getSex() const= 0;

private:
  std::string name;

};

class Man: public HumanBeing{
public:

  // using HumanBeing::HumanBeing;
  Man(const std::string n): HumanBeing(n){}

  std::string getSex() const{
    return "male";
  }
};


class Woman: public HumanBeing{
public:

  // using HumanBeing::HumanBeing;
  Woman(const std::string n): HumanBeing(n){}

  std::string getSex() const{
    return "female";
  }
};

int main(){

  std::cout << std::endl;

  // Abstract abstract;    // ERROR
  Concret concret;

  // HumanBeing humanBeing("grimm");   // ERROR

  Man schmidt("Schmidt");
  Woman huber("Huber");

  std::cout << "schmidt.getSex(): " <<  schmidt.getSex() << std::endl;
  std::cout << "huber.getSex(): " << huber.getSex() << std::endl;

  std::cout << std::endl;

}

// We have created a pure virtual class Abstract and we cannot make an instance of this class as it will give an error.

// The classes Man and Woman inherit publically from the class HumanBeing.

// getSex function is pure virtual so we cannot make an instance of HumanBeing in main.

// The instances of the Man and Woman classes can access the getSex function by using the . operator and they must be overridden in derived classes.