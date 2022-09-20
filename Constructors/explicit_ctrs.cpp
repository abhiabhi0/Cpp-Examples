#include <iostream>
#include <string>

class Account{
public:
  explicit Account(double b): balance(b){}
  Account(double b, std::string c):balance(b), cur(c){}

private:
    double balance;
    std::string cur;
};

void strange(Account a){
  std::cout << "It works!" << std::endl;
}

int main(){

   // Account account = 100.0; // ERROR
   Account account1(100.0);
   Account account2 = {100.0, "EUR"};
   // strange(100.0);        // ERROR
   // strange(false);

}

// When the explicit keyword is introduced in the code, implicit constructor calls are restricted.

// Uncomment the lines to observe the error shown by the compiler in the explicit code tab.