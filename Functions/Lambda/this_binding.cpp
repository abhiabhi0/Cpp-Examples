#include <iostream>

class ClassMember{
  const static int a = 1;
  int get10(){
    return 10;
  }
  public:
    void showAll(){
      // define and invoke (trailing () ) the lambda functions
      [this]{std::cout << "by this = " << get10() + a  << std::endl;}();
      [&]{std::cout << "by reference = " << get10()+ a  << std::endl;}();
      [=]{std::cout << "by copy = " << get10() + a << std::endl;}();
    }
};

int main(){

  std::cout << std::endl;

  ClassMember cM;
  cM.showAll();

  std::cout << std::endl;

}

// This is an example of how the this binding works with lambdas.

// this binds all the members of a class to the lambda. It is very similar to the = binding.