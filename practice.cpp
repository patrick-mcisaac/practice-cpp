#include <iostream>

int main()
{
    int num = 8;
    int *p = &num;
    int **d = &p;

    // std::cout << p << std::endl;
    // std::cout << *p << std::endl;
    // std::cout << d << std::endl;
    // std::cout << *d << std::endl;
    // std::cout << **d << std::endl;

    **d += 1;

    std::cout << *p << std::endl;
    return 0;
}