#include <iostream>
using namespace std;

int main()
{
    int var1 = 10;
    int var2 = 55;
    
    // declaring a constant pointer
    int* const ptr = &var1;
    
    cout << "Old value of var1: " << *ptr << endl;
        
    // changing the value of var1 using ptr
    *ptr = 11;
    
    cout << "New value of var1: " << *ptr << endl;
    
    // Following line will create an error
    // ptr = &var2;

    return 0;
}
