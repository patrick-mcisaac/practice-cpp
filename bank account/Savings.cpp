#include "Savings.h"

Savings::Savings()
{
}

Savings::~Savings()
{
}

double Savings::get_balance()
{
    return balance;
}

double Savings::deposit(double ammount)
{
    balance += ammount;
    return balance;
}

double Savings::withdraw(double ammount)
{
    balance -= ammount;
    return balance;
}