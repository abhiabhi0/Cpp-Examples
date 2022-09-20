#include <iostream>
#include <string>
#include <vector>

struct ClassMemberInitializer{
  
    ClassMemberInitializer() = default;
    ClassMemberInitializer(int num):x(num){};

    //valid with C++98
    const static int oldX=5;

    // valid with C++11
    int x = 5; //class member initializer

    // valid with C++11
    std::string s = "Hello C++11";

    // valid with C++11
    std::vector<int> myVec{1, 2, 3, 4, 5};

};

int main(){

    std::cout << "\n";

    // class member initialization
    ClassMemberInitializer cMI;
    std::cout << "cMI.oldX " << cMI.oldX << "\n";
    std::cout << "cMI.x " << cMI.x << "\n";
    std::cout << "cMI.s " << cMI.s << "\n";
    for (auto vec: cMI.myVec) std::cout << vec << " ";

    std::cout << "\n\n";

    // class member initialization
    // x will be overriden by the constructor value
    ClassMemberInitializer cMI2(10);
    std::cout << "cMI2.oldX " << cMI2.oldX << "\n";
    std::cout << "cMI2.x " << cMI2.x << "\n";
    std::cout << "cMI2.s " << cMI2.s << "\n";
    for (auto vec: cMI2.myVec) std::cout << vec << " ";

    std::cout << "\n\n";

}

// This example simply shows how class members can be initialized outside the constructor.

// Initializing const static attributes, as in line 11, has been a feature since C++98.

// C++11 adds support for several other types such as int, string, and vector