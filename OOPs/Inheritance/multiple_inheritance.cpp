#include <iostream>

class Account{
public:

  Account(double amt):amount(amt){}

  double getBalance() const {
    return amount;
  }

private:
  double amount;
};

class BankAccount: public Account{
public:
  BankAccount(double amt): Account(amt){}
};

class WireAccount: public Account{
public:
  WireAccount(double amt): Account(amt){}
};

class CheckingAccount: public BankAccount, public WireAccount{
public:
  CheckingAccount(double amt): BankAccount(amt), WireAccount(amt){}
};

int main(){

  std::cout << std::endl;

  CheckingAccount checkAccount(100.0);
  // checkAccount.getBalance();         // ERROR

  std::cout << "checkAccount.BankAccount::getBalance(): "  <<  checkAccount.BankAccount::getBalance()   <<  std::endl;
  std::cout << "checkAccount.WireAccount::getBalance(): "  <<  checkAccount.WireAccount::getBalance()   <<  std::endl;

  std::cout << std::endl;

}

// In the example above, we have created an Account class with a getBalance method.

// The BankAccount and WireAccount classes publically inherit from the Account class and have access to the getBalance method.

// The class CheckingAccount publicly inherits from BankAccount and WireAccount in line 26, and now has access to the getBalance methods of both classes.

// If we try to call the getBalance method using the instance of CheckingAccount class, it will give us an error, but if we call it with the name of the base class along with the scope operator :: then it works fine.