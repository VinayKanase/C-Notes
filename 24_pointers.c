#include <stdio.h>

// Pointer is just a memory address
// %p is format specifier for pointers
int main()
{
    int age = 17;

    printf("Integer Age variable's memory address is %p\n", &age);

    // Pointer variables has value as memory address
    // That is like above age variable has value 17 but pointers has value memory address
    // We actually don't know all memory addresses so most of time we use memory of address of
    // another variable in program itself.

    // Niow let's create a pointer variable that is soring memory address of age variable.

    int *pAge = &age; // genrally pointers are started with small 'p' and followed by name of variable.

    // Now,, Remember when we are storing address of int variable we make its pointer as int same for other varibale data types also

    double percent = 86.37;
    double *pPercent = &percent; // this pointer has data type same has its variable
    return 0;
}