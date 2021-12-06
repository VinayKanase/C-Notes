#include <stdio.h>

// We will be using pointer reference to create a file

int main()
{
    // TASKS we can do with file
    // r - read file
    // w -  write is for creating a new file or write over exesting file.
    // a - append data on file
    FILE *fpointer = fopen("sample.txt", "w");

    fprintf(fpointer, "Tom, Sr Dev\nRocky, Jr Dev\nTony, Software Tester");

    fclose(fpointer); // Since, we open a file we also need to close it after our work.

    // REMEMBER write overrites file to add dat without overwriting we can use append(a)

    FILE *fpointer2 = fopen("sample.txt", "a");

    fprintf(fpointer2, "\nRonaldo, Marketing");

    fclose(fpointer2);

    // Remmeber it's not nessary to only write txt file we can write html, css etc files too.

    return 0;
}