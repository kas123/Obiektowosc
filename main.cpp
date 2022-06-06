#include <iostream>
#include "BankAccount.hpp"
int main()
{
    Bank savingAccount(100);
    Bank savingAccount2(savingAccount);
    std::cout << savingAccount2.getBalance() << std::endl;
    savingAccount.deposit(100);
    std::cout << savingAccount.getBalance() << std::endl;
    double cash = savingAccount.withdraw(50);
    std::cout << cash << " " << savingAccount.getBalance() << std::endl;
    cash = savingAccount.withdraw(100); // 50
    std::cout << cash << " " << savingAccount.getBalance() << std::endl;

    Bank savingAccount3(savingAccount);
    std::cout << savingAccount3.getBalance() << std::endl;
    std::cout << savingAccount2.getBalance() << std::endl;
    return 0;


}