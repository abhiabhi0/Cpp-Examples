#include <iostream>

class Base{

public:

  Base& operator = (const Base& other){
    if (this == &other){
      std::cout << "self-assignment" << std::endl;
      return *this;
    }
    else{
      a = other.a;
      b = other.b;
      return *this;
    }
  }

  void newA(){
    int a{2011};
    std::cout << "this->a: " << this->a << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "this->b: " << this->b << std::endl;
  }

private:
  int a{1998};
  int b{2014};

};

int main(){

  std::cout << std::endl;

  Base base;
  base.newA();

  std::cout << std::endl;

  Base& base2 = base;
  base = base2;

  std::cout << std::endl;

}

// The this pointer is being used in the copy operation on lines 8, 10, and 15.

// To check whether the assignee and assigned are the same object, we can use this. In such a case, we can simply return the dereferenced value of the this reference to our object.

// The class contains two attributes, a and b.

// In the newA() method, there is a variable named a. We can differentiate between the variable and the attribute by using this to access the attribute, as done on line 21.

// Since there isn’t a b variable in the method, this->b and b mean the same thing (line 24). This is because every member already has an implicit this pointer.