#include <stdio.h>

// Do while is similar to while loop the only difference is
// do while loop executes first and then checks the condition that is even if the condition is false it will execute at least one time

int main()
{
    int i = 6;
    do
    {
        printf("%d\t", i);
        i++; // increment i with 1 that is i = i  + 1
    } while (i <= 5);
    printf("\n");
    return 0;
}