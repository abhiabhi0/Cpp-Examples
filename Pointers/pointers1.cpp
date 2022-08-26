#include <iostream>
using namespace std;

int main()
{
    int var = 23;

    int *ptr;
    
    ptr = &var;
    
    cout << "Initial value of var is: " << var << endl;
    cout << "Initial value of *ptr is: " << *ptr << endl << endl;
    
    // changing the value of var using ptr
    *ptr = 50;
    
    cout << "New value of *ptr is: " << *ptr << endl;
    cout << "New value of var is: " << var << endl;
    
    return 0;
}
