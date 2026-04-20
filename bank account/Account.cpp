#include "Account.h"

Account::Account(std::string first_name, std::string last_name, std::string password)
    : first_name(first_name), last_name(last_name), password(password)
{
}

Account::~Account()
{
    delete savings;
}

void Account::set_first_name(std::string first_name)
{
    first_name = first_name;
}

void Account::set_last_name(std::string last_name)
{
    last_name = last_name;
}

void Account::set_password(std::string password)
{
    password = password;
}

std::string Account::get_first_name()
{
    return first_name;
}

std::string Account::get_last_name()
{
    return last_name;
}

std::string Account::get_password()
{
    return password;
}

void Account::add_savings_account()
{
    savings = new Savings();
}