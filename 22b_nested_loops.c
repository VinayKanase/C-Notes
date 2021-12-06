#include <stdio.h>

// Nested for loop means for loop inside for loop
// To print 2d array we need to use nested for loop
int main()
{
    int twodArray[3][3] = {{1, 2, 3},
                           {4, 5, 6},
                           {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", twodArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}