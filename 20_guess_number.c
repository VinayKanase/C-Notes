/*
 Question: Create a secret number let the user guess the number if the guess is worng help user with hints.
*/
#include <stdio.h>

int main()
{
    int secretNumber = 9;
    int userGuessNum;

    int guessLimit = 3;

    while (userGuessNum != secretNumber && guessLimit != 0)
    {
        printf("Guess number\t");
        scanf("%d", &userGuessNum);
        guessLimit--;
        if (userGuessNum > secretNumber)
            printf(" Secret Number is smaller than number you entered\n Number of chances left: %d\n", guessLimit);
        else if (userGuessNum < secretNumber)
            printf(" Secret Number is greater than number you entered\n Number of chances left: %d\n", guessLimit);
    }
    if (userGuessNum == secretNumber)
        printf("You Win\n");
    else if (guessLimit == 0)
        printf("You Lose");

    return 0;
}