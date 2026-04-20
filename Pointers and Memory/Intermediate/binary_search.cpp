#include <iostream>
int binarySearch(int *count, int arr[], int target, int size)
{
    int l = 0;
    int r = size - 1;
    std::cout << count << "     " << *count << std::endl;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (*(arr + mid) == target)
        {
            *count += 1;
            return mid;
        }

        if (*(arr + mid) < target)
        {
            l = mid + 1;
            *count += 1;
        }
        else
        {
            r = mid - 1;
            *count += 1;
        }
    }
    return -1;
}
int main()
{
    int count = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(&count, arr, 8, size);

    std::cout << "found target at: " << result << " iterations: " << count << std::endl;
    return 0;
}