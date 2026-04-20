#include <iostream>

double *calculateStats(double arr[], int size)
{
    // You'll need to calculate 4 values before storing them in newArr
    // Initialize variables for sum (start at 0), max, and min (both start at arr[0])
    // Use a for loop to iterate through the array
    // Inside the loop:
    //   - Add each element to sum
    //   - Compare each element with max and update if larger
    //   - Compare each element with min and update if smaller
    // Calculate average = sum / size (after the loop)

    double *newArr = new double[4];
    double sum = 0;
    double max = arr[0];
    double min = arr[0];

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];

        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    double average = sum / size;

    newArr[0] = sum;
    newArr[1] = max;
    newArr[2] = min;
    newArr[3] = average;

    return newArr;
}

int main()
{
    double arr[] = {1, 2, 3, 4};
    double *results = calculateStats(arr, 4);
    for (int i = 0; i < 4; i++)
    {

        std::cout << results[i] << std::endl;
    }
    delete[] results;
    return 0;
}