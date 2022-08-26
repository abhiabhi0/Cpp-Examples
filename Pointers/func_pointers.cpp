#include<iostream>
using namespace std;

// creating a function
int square(int x)
{
    return x * x;
}

int main()
{
    int num = 9;
    int result;
    
    // creating a pointer to function
    int (*fp)(int);
    
    
    // storing the address of square() in fp
    fp = square;
    
    // using fp to call the function square()
    result = (*fp)(num);
    
    cout << "The square of 9 is: " << result;
    
    return 0;
}
