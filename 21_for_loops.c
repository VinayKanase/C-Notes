#include <stdio.h>

// For loop is similar to while loop.
// syntax for loop
/*
    for(initalize; condition; increment){
        // Block of Code
    }

    For loop 
*/

int main()
{
    int i = 1;
    while (i <= 5)
    {
        printf("%d\t", i);
        i++;
    }
    printf("\n");
    // This is a normal while loop that prints number from 1 to 5
    // Below is for loop which will do the same thing as while loop abocve but in more condensed easy understanding way
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
    printf("\n");

    // Let's use for loop to print all the numbers in an array
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", numbers[i]);
    }
    printf("\n");

    return 0;
}