#include <stdio.h>

int main()
{
    char line1[200];
    char line2[200];
    FILE *fpointer = fopen("sample.txt", "r");

    fgets(line1, sizeof(line1), fpointer);
    // evertimke we run fgets it is going to increament fpointer to next lines taht is
    fgets(line2, sizeof(line2), fpointer);

    printf("%s", line1);
    printf("%s", line2);

    fclose(fpointer);
    return 0;
}