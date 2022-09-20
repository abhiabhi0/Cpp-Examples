#include <iostream>

class Account{
public:
  constexpr Account(int amou): amount(amou){}
  constexpr double getAmount() const {
    return amount;
  }
  constexpr double getAccountFees() const {
    return 0.05 * getAmount();
  }
private:
  double amount;
};

int main(){

  std::cout << std::endl;

  constexpr Account accConst(15);
  constexpr double amouConst = accConst.getAmount();
  std::cout << "amouConst: " << amouConst << std::endl;
  std::cout << "accConst.getAccountFees(): " << accConst.getAccountFees() << std::endl;

  std::cout << std::endl;

  Account accDyn(15);
  double amouDyn = accDyn.getAmount();
  std::cout << "amouDyn: " << amouDyn << std::endl;
  std::cout << "accDyn.getAccountFees(): " << accDyn.getAccountFees() << std::endl;

  std::cout << std::endl;

}

// The constexpr constructor, and the methods getAccountFees and getAmount will be evaluated at compile time.

// Since constexpr methods are implicitly const, we mention the const keyword in the definitions as well.

// Line 21 shows how the returned value of getAmount() can be stored in a constexpr double.

// As we can see in line 27, constexpr methods can also be called by non-constexpr objects.