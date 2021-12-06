#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20], pluralNoun[20], celebrityFirstName[20], celebrityLastName[20];

    printf("Enter color ");
    scanf("%s", color);
    printf("Enter plural noun ");
    scanf("%s", pluralNoun);
    printf("Enter celebrity name ");
    scanf("%s%s", celebrityFirstName, celebrityLastName);
    printf("\nRoses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityFirstName, celebrityLastName);   
    return 0;
}