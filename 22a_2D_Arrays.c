#include <stdio.h>

// 2d array is array that has it's elements as array
// For 2d array we use 2 [] box brackets one for width and other for height
int main()
{
    int twodArray[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    printf("%d\n", twodArray[0][0]); // Output: 1
    printf("%d\n", twodArray[0][1]); // Output: 2
    printf("%d\n", twodArray[1][0]); // Output: 3
    printf("%d\n", twodArray[1][1]); // Output: 4

    // Initalize Array without elements
    int array2[3][2];

    // Set one value of 2d array
    array2[0][0] = 9;

        return 0;
}