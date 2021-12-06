#include <stdio.h>

// While loop is block of code that can be executed until given codition is false
// syntax
// while(condition){
/* Block of code */
// }

// REMEMBER if the condition in while loop never become false or never terminates then this while loop becomes infinite loop
int main()
{
    int i = 1;
    while (i <= 5)
    {
        printf("%d\t", i);
        i++; // increment i with 1 that is i = i  + 1
    }
    printf("\n");
    return 0;
}