#include <iostream>
#include <iomanip>

enum enMatrixD { ROWS = 10, COLS =10 };

void fillMul2Darray(int arr[10][10], int rowSize, int colSize)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = (i+1) * (j+1);
        }
    }
}

void printMul2Darray(int arr[10][10], int rowSize, int colSize)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            std::cout << std::setw(2) << arr[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int main(void)
{
    int arr[ROWS][COLS];

    fillMul2Darray(arr, ROWS, COLS);
    printMul2Darray(arr, ROWS, COLS);

    return (0);
}
