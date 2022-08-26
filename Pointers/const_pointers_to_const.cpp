#include <iostream>
using namespace std;

int main()
{
    // declaring constant variables
    const int var1 = 10;
    const int var2 = 55;

    // declaring constant pointer to constant
    const int* const ptr = &var1;

    // *ptr = 12;
    // Error: assignment of read-only

    // ptr = &var2;
    // Error: assignment of read-only

    // Address of var1
    cout << "Address of var1: " << ptr << endl;

    // Value of var1
    cout << "Value of var1: "<< *ptr;

    return 0;
}
