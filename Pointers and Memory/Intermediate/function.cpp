#include <iostream>

int double_num(int num)
{
    return num * 2;
}

void apply(int *arr, int size, int (*fn)(int num))
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = fn(*(arr + i));
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    apply(arr, size, [](int num) { return num * num; });

    for (int num : arr)
    {
        std::cout << num << std::endl;
    }

    return 0;
}