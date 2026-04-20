#include <iostream>

int main()
{
    int power = 9000;

    int *ptr = &power;

    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << &ptr << std::endl;

    return 0;
}