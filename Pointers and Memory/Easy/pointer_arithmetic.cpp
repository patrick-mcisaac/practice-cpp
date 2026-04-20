#include <iostream>

int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}

int main()
{
    int arr[] = {1, 2, 3, 1, 100, 7371};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = sum(arr, size);
    std::cout << result << std::endl;
    return 0;
}