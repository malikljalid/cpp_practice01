#include <iostream>

int main(void)
{
    // int x[Rows][Cols];
    int x[3][4] =   { 
                        {10, 20, 30, 40}, 
                        {50, 60, 70, 80}, 
                        {90, 100, 110, 120} 
                    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << x[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    return (0);
}
