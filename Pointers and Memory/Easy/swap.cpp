#include <iostream>

/*
Write code that uses pointers to swap two ints
*/

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

void swap(int &i, int &j)
{
    int temp = i;
    i = j;
    j = temp;
}

int main()
{
    int i = 1;
    int j = 4;

    std::cout << "i : " << i << "  " << "j : " << j << std::endl;

    swap(&i, &j);

    std::cout << "i : " << i << "  " << "j : " << j << std::endl;

    return 0;
}