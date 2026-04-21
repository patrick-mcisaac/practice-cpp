#include <iostream>

int binarySearch(int *arr, int size, int target)
{

    int result = -1;

    int l = 0;
    int r = size - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return result;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, size, 90);

    std::cout << result << std::endl;

    return 0;
}