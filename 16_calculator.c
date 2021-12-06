/*
    Question:  Basic Calculator
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double num1, num2;
    char operator;
    printf("Enter a number\t");
    scanf("%lf", &num1);
    printf("Enter operator\t");
    scanf(" %c", &operator); // REMEMBER: while taking character as input put a space before format specifier
    printf("Enter a number\t");
    scanf("%lf", &num2);

    if (operator== '+')
        printf("\nAddition of %f + %f is %f\n", num1, num2, num1 + num2);
    else if (operator== '-')
        printf("\nSubraction of %f - %f is %f\n", num1, num2, num1 - num2);
    else if (operator== 'x' || operator== '*') // || is OR operator
        printf("\nMultiplication of %f x %f is %f\n", num1, num2, num1 * num2);
    else if (operator== '/')
        printf("\nDivision of %f and %f is %f\n", num1, num2, num1 / num2);
    else
        printf("Wrong operator\n");

    return 0;
}