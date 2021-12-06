#include <stdio.h>

// Return is special keyword used in function to return the information or data whoever calls the function
// Functions that return value should be defined above the main function
//  If we want to define function below int main function then we write prototype or signature of function above int main

double cube(double number){
    return number * number * number; // returns the cube of entered number
    // REMEMBER: Code written after return statment in function will not be executed 
    // Since, return statment breaks out of function and returns the value.
}


double square(double number);  // This is prototype or signature of square function.

int main()
{
    printf("Cube of 3 is %f\n", cube(3));
    printf("Square of 4 is %f\n", square(4));
    return 0;
}

double square(double number){
    return number * number;
}