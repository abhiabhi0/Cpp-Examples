#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {1, 2, 3};
    
    int *ptr;
    
    // assigning address of arr[0] to ptr
    ptr = arr;
    // ptr = &arr[0] will do the same thing
    
    cout << "The elements of the array are: "
         << ptr[0] << " "  // using ptr[0] instead of arr[0]
         << ptr[1] << " "
         << ptr[2] << endl;
    
    return 0;
}
