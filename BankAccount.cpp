#include "BankAccount.hpp"

Bank::Bank(double balance)
{
   
    this->balance = balance;
  
}

Bank::Bank(const Bank& old)
{
    balance = old.balance;
}

double Bank::withdraw(double amount)
{
    double withdrew = amount;
    if (balance > amount)
    {
        balance -= amount;
    }
    else
    {
        withdrew = balance;
        balance = 0;
    }
    return withdrew;
}

void Bank::deposit(double amount)
{
    balance += amount;
}

double Bank::getBalance()
{
    return balance;
}
