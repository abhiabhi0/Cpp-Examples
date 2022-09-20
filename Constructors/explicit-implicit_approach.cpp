#include <iostream>
#include <string>

class Account{
public:
  Account(double b): balance(b){}
  Account(double b, std::string c):balance(b), cur(c){}

private:
    double balance;
    std::string cur;
};

void strange(Account a){
  std::cout << "It works!" << std::endl;
}

int main(){

   Account account = 100.0; // No ERROR
   Account account1(100.0);
   Account account2 = {100.0, "EUR"};
   strange(100.0);        // No ERROR
   strange(false);

}

// In the implicit approach, the assignment operations in lines 20 and 22 do not cause an error.

// In the implicit approach, the function strange has an Account parameter, but passing it a double or bool implicitly calls the Account constructor, as done in lines 23 and 24.

