/*
### 6. Dynamic 2D Array
Allocate a 2D matrix using `int**`, populate it, transpose it in place, then free all memory correctly. No leaks
allowed!
*/

void array(int r, int c)
{
    int **matrix;
    matrix = new int *[r];
    for (int i = 0; i < r; i++)
    {
        matrix[i] = new int[c];
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matrix[i][j] = i + j;
        }
    }

    for (int i = 0; i < r; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main()
{

    array(3, 3);
    return 0;
}