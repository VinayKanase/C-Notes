#include <stdio.h>

// Switch is similar to else if
// Switch has cases if the entered value in ()parentheses has value equal to any of the cases then the code inside that case is executed
// we need to put break after each case or end of each case is because if we don't have break then all cases after the right case will be eecuted
int main()
{
    char grade;
    printf("Enter Your grade\t");
    scanf(" %c", &grade);

    switch (grade)
    {
    case 'A':
        print("Congrats, Keep it Up.");
        break;
    case 'B':
        printf("Good work");
        break;
    case 'C':
        printf("Can do better");
        break;
    case 'D':
        printf("Work harder");
        break;
    case 'E':
        printf("Just passed");
        break;
    case 'F':
        printf("Failed");
        break;
    default:
        printf("Wrong Entry of Grade");
        break;
    }
    return 0;
}