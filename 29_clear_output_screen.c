/*
Sometimes we want to clear output screen while running code. Mostly in menu driven system.

There are two basic and easy ways to clear output screen
*/

#include <stdio.h>
#include <wmmintrin.h> // For Linux users
// #include <windows.h> // For windows users

int main()
{
    //  1st way to clear output screen
    system("clear");
    // system("cls"); // For windows
    // 2nd way
    printf("\e[1;1H\e[2J");

    /*
        Which way is better?
            2nd way is better because it is system independent and is more faster.
    */
    return 0;
}