#include <iostream>

class Account{

public:
  explicit Account(double b): balance(b){}

  Account& operator += (double b){
    balance += b;
    return * this;
  }

  friend Account& operator += (Account& a, Account& b);
  friend std::ostream& operator << (std::ostream& os, const Account& a);

private:
  double balance;

};

Account& operator += (Account& a, Account& b){
   a.balance += b.balance;
   return a;
 }

std::ostream& operator << (std::ostream& os, const Account& a){
   os << a.balance;
   return os;
}

int main(){

  std::cout << std::endl;

  Account acc1(100.0);
  Account acc2(100.0);
  Account acc3(100.0);

  acc1 += 50.0;
  acc1 += acc1;

  acc2 += 50.0;
  acc2 += acc2;

  acc3.operator += (50.0);
  //acc3.operator += (acc3);   ERROR

  std::cout << "acc1: " << acc1 << std::endl;
  std::cout << "acc2: " << acc2 << std::endl;

  std::cout << std::endl;

}

// The += operator is being overloaded for the Account class in lines 8 to 10. Now, we can add and assign a double to an Account object without any problems. However, this will not support Account += Account, where both operands are of the Account type.

// For this purpose, we declare a friend function in line 13 to support the additional assignment between two Account objects. The friend function can access the private member, balance. Hence, we can perform a.balance + b.balance. The function has been implemented in lines 21 to 24.

// The << output operator has also been overloaded in a friend function on lines 26 to 29. Now, std::cout << acc; will print the balance of the acc object.

// From lines 39 to 43, we can see examples of the additional assignment working between the Account and double types.

// One thing to note is that the explicit operator call works when the argument is a double, as seen in line 45.

// However, the call would not work for the Account argument in line 46. This is because the class doesn’t support the conversion from Account to double.