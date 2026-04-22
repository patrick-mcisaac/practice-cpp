#include <iostream>
#include <memory>

int main()
{
    int size;
    std::cout << "Enter a number" << std::endl;
    std::cin >> size;

    // int *arr = new int[size];
    // for (int i = 0; i < size; i++)
    // {
    //     arr[i] = i;
    // }
    // for (int i = 0; i < size; i++)
    // {

    //     std::cout << i << std::endl;
    // }
    // delete[] arr;
    // arr = nullptr;

    auto arr = std::make_unique<int[]>(size);
    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}