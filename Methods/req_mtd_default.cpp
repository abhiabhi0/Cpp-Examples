#include <iostream>

class SomeType{
  public:

  // state the compiler generated default constructor
  SomeType() = default;

  // constructor for int
  SomeType(int value){
    std::cout << "SomeType(int) " << std::endl;
  };

  // explicit Copy Constructor
  explicit SomeType(const SomeType&) = default;

  // virtual destructor
  virtual ~SomeType() = default;

};

int main(){

  std::cout << std::endl;

  SomeType someType;
  SomeType someType2(2);
  SomeType someType3(someType2);

  std::cout << std::endl;

}

// In this example, we can see how default can be used to get the default implementations of constructors and destructors from the compiler.

// Since we have defined a parameterized constructor in line 10, the compiler will not automatically create a default constructor.

// Hence, we have to define it ourselves using default, as done in line 7.

// default can automatically handle the copy constructor in line 15 and the destructor in line 18.

// The explicit keyword is used in the copy constructor to avoid implicit conversions during copying.

// We need the virtual destructor in case there is a derived class inheriting SomeType.