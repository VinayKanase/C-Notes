#include <stdio.h>

// Access memory address in C
// wHEN we create varaibles they actually allocate storage on our physical memory while running or executing our program
// to access a value in a variable we use variable name in same way this value stored on our memory has a memory address to get access to.

int main()
{
    int age = 18;
    double percentage = 86.37;
    char grade = 'B';

    printf("%p\n", &age); // Memory address may change every time we execute the code.

    printf("percentage: %p\ngrade: %p\n", &percentage, &grade);

    return 0;
}