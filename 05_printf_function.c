/* Printf allows us to print information out on screen. printf is a function*/
#include <stdio.h>

int main()
{
    //  In printf function we can use special characters.
    printf("Hello World!!!\n"); // For moving our printf to next line we use \n(newline) character.
    printf("Hello\"World"); // For printing (") symbol we need \" in printf function.

    // printf is very powerful we can also print variables with it to print variables we need to use format specifiers
    // To print integer we use %d format specifier 
    int age = 18;
    printf("%d", 400);
    printf("\nHis age is %d\n", age);
    // Using multiple format specifiers in printf
    char name[] = "Arun";
    printf("%s %d","Tom", 12);
    printf("\n%s is %d years old.\n", name, age);
    // NOTE: Always remember the order we put format specifiers we have to put variables in same order seprated by comma.
    // Now, Let's see some of the format specifiers
    // %d - integer
    // %s - string
    // %f - decimal numbers
    // %c - single character
    return 0;
}