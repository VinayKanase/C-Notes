#include <stdio.h>

int main(){
//  Constant are special type of variables that can be modified
// Once we create constant it is fixed it can't be futher modified.

// Now, first Remember normal variables Like
    int num = 5;
    printf("%f\n", num);
    num = 9;
    printf("%f\n", num);

    // Creating a const variable is easy
    const int NUM = 5;
    printf("%d\n", NUM);
    // NUM = 6; // This will create an error which is we can't modify const variables
    printf("%d\n", NUM);
    // NOTE: Genrally const are written all in uppercase it's not required or syntax.
    return 0;
}