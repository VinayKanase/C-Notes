/*
 Name: Vinay Sitaram Kanse
 Question: Take two numbers from user. Add numbers and print it.
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter first number\t");
    scanf("%d", &num1);
    printf("Enter second number\t");
    scanf("%d", &num2);

    printf("Sum of two numbers is %d\n", num1 + num2);
    return 0;
}