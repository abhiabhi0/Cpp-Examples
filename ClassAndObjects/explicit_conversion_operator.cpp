#include <iostream>

class A{};

class B{};

class MyClass{
  public:
    MyClass(){}
    explicit MyClass(A){}                // since C++98
    explicit operator B(){return B();}   // new with C++11
};

void needMyClass(MyClass){};
void needB(B){};

struct MyBool{
  explicit operator bool(){return true;}
};

int main(){

  // A -> MyClass
  A a;

  // explicit invocation
  MyClass myClass1(a);
  // implicit conversion from A to MyClass
  MyClass myClass2=a;
  needMyClass(a);

  // MyClass -> B
  MyClass myCl;

  // explicit invocation
  B b1(myCl);
  // implicit conversion from MyClass to B
  B b2= myCl;
  needB(myCl);

  // MyBool -> bool conversion
  MyBool myBool;
  if (myBool){};
  int myNumber = (myBool)? 1998: 2011;
  // implicit conversion
  int myNewNumber = myBool + myNumber;
  auto myTen = (20*myBool -10*myBool)/myBool;

  std::cout << myTen << std::endl;

}

// We have defined an explicit conversion constructor from A to MyClass in line 10.

// The constructor call works fine in line 27, but the implicit conversions in lines 29 and 30 are rejected by the compiler.

// needMyClass(a) will not be able to implicitly convert a to MyClass. This functionality has been available since C++98.

// We have defined an explicit conversion operator from MyClass to B in line 11.

// Lines 38 and 39 use an implicit conversion. Due to the explicit conversion operator B in line 11, this is not valid.

// Because of this explicit definition, implicit conversions through the operator are rejected by the compiler, as seen in lines 46 and 47.

// The explicit conversion feature was introduced in C++11.