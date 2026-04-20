#pragma once

class Savings
{
  public:
    Savings();
    ~Savings();

    double get_balance();
    double deposit(double);
    double withdraw(double);

  private:
    double balance = 0;
};