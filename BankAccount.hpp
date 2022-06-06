#pragma once

class Bank
{
    double balance = 0;

public:
    Bank(double balance);

    Bank(const Bank& old);

    double withdraw(double amount);

    void deposit(double amount);
    double getBalance();



};