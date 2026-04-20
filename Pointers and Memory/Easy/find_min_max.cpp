/*
### 4. Find Min and Max
Write `void minMax(int* arr, int size, int* min, int* max)` — the caller passes in pointers to receive both results
simultaneously.
 */
#include <iostream>

void minMax(int arr[], int size, int *min, int *max)
{
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > *max)
        {
            *max = *(arr + i);
        }
        if (*(arr + i) < *min)
        {
            *min = *(arr + i);
        }
    }
}

int main()
{
    int arr[] = {10, -2, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0];
    int max = arr[0];

    minMax(arr, size, &min, &max);
    std::cout << "min" << ": " << min << std::endl;
    std::cout << "max" << ": " << max << std::endl;
    return 0;
}