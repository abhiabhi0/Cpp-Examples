#include <iostream>
using namespace std;

int main()
{
    int var1 = 20;
    int var2 = 100;
    
    // declaring pointer to constant
    const int *ptr;
    
    // assigning address of var1 to ptr
    ptr = &var1;
    
    cout << "Value of *ptr is: " << *ptr << endl;
    
    
    // now assigning address of var2 to ptr
    ptr = &var2;
    
    cout << "New value of *ptr is: " << *ptr << endl;
    
    // The following line will cause an error:
    // *ptr = 5;
    
    return 0;
}
