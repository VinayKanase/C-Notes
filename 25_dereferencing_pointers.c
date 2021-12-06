#include <stdio.h>

// dereferencing pointer means to use pointer to actually get the value present oon the address of memory.

int main()
{
    int age = 30;
    int *pAge = &age;

    printf("Pointer of age variable is %p\n", pAge);
    printf("Value of age by dereferencing pointer is %d\n", *pAge); // when we dereference a poiinter it is no longer a pointer it is a value stored inside that pointer.
    return 0;
}