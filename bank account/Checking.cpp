#include "Checking.h"

Checking::Checking()
{
}

Checking::~Checking()
{
}

double Checking::get_balance()
{
    return balance;
}

double Checking::deposit(double ammount)
{
    balance += ammount;
    return balance;
}

double Checking::withdraw(double ammount)
{
    balance -= ammount;
    return balance;
}