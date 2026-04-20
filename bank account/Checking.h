#pragma once

class Checking
{
  public:
    Checking();
    ~Checking();
    double get_balance();
    double deposit(double);
    double withdraw(double);

  private:
    double balance = 0;
};