#include <iostream>

#include "Account.h"

int main()
{
    Account new_account("John", "Doe", "123");

    std::cout << new_account.get_first_name() << std::endl;

    new_account.checking.deposit(34);

    std::cout << new_account.checking.get_balance() << std::endl;

    new_account.add_savings_account();

    new_account.savings->deposit(432);

    std::cout << new_account.savings->get_balance() << std::endl;

    new_account.savings->withdraw(32);

    std::cout << new_account.savings->get_balance() << std::endl;
    return 0;
}