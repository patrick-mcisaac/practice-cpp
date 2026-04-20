
double *calculateStats(double arr[], int size)
{
    double sum = 0;
    double average = 0;
    double max = *arr;
    double min = *arr;

    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    average = sum / size;

    double *newArr = new double[4];
    newArr[0] = sum;
    newArr[1] = average;
    newArr[2] = max;
    newArr[3] = min;

    return newArr;
}

int main()
{
    double arr[] = {9, 1, 2, 3, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    calculateStats(arr, size);
    return 0;
}