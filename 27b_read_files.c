#include <stdio.h>

int main()
{
    int age;
    char firstName[20], lastName[20], profession[20];
    FILE *file = fopen("sample2.txt", "r");
    if (file != NULL)
    {
        int count = 1;
        while (fscanf(file, "%s %s %d %s ", firstName, lastName, &age, profession) != count)
        {
            printf("%s %s is %d years old and is a %s\n", firstName, lastName, age, profession);
            count++;
        }
    }
    return 0;
}