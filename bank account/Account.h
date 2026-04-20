#pragma once

#include <iostream>
#include <string>

#include "Checking.h"
#include "Savings.h"

class Account
{
  public:
    Account(std::string, std::string, std::string);
    ~Account();

    void set_first_name(std::string);
    void set_last_name(std::string);
    // void set_account_number(std::string);
    void set_password(std::string);

    std::string get_first_name();
    std::string get_last_name();
    // std::string get_account_number();
    std::string get_password();

    Checking checking;
    Savings *savings = nullptr;

    void add_savings_account();

  private:
    std::string first_name;
    std::string last_name;
    std::string account_number;
    std::string password;
};