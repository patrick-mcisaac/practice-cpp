
#include <iostream>

int main()
{
    int soda = 99;
    int &pop = soda;

    std::cout << pop << std::endl;
    std::cout << &pop << std::endl;
    std::cout << &soda << std::endl;

    pop++;
    std::cout << pop << " " << soda << std::endl;

    if (pop == soda)
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }
    return 0;
}