#include <iostream>
#include <memory>

int main(){
  std::auto_ptr<int> ap1(new int(2011));
  std::auto_ptr<int> ap2 = ap1;              // OK

  std::unique_ptr<int> up1(new int(2011));
  //std::unique_ptr<int> up2 = up1;            // ERROR
  std::unique_ptr<int> up3 = std::move(up1); // OK

  return 0;
}

//The code below will generate an error since we are using the deprecated auto_ptr.