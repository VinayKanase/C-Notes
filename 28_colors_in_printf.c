/*
    There are different ways by which we can add colors to our output text.
*/

#include <stdio.h>

// Colors Function
void blackText()
{
    printf("\033[0;30m");
}

void redText()
{
    printf("\033[0;31m");
}

void greenText()
{
    printf("\033[0;32m");
}

void yellowText()
{
    printf("\033[0;33m");
}

void blueText()
{
    printf("\033[0;34m");
}

void purpleText()
{
    printf("\033[0;35m");
}

void cyanText()
{
    printf("\033[0;36m");
}

void whiteText()
{
    printf("\033[0;37m");
}
void reset()
{
    printf("\033[0m");
}

int main()
{
    yellowText();
    printf("Yellow Colored Text\n");
    reset(); // It is very important to reset text.
    /* We can also make text bold we just have to change the number 0 to 1 in printf 
    For Ex: For blue color text `\033[0;34m` is regex if we make it `\033[1;34`  */
    printf("\033[1;33m"); // makes text color yellow and bold
    printf("Yellow Colored and Bold Text\n");
    reset();

    return 0;
}
