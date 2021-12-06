#include <stdio.h>

int main()
{
    int userAge; // We can use variables to store user entered data that why we are declaring this variable
    // Before taking user input we should prompt user that what user should enter
    printf("Enter your Age \t");
    // We are going to use scannf function to take user input
    // scanf(tye of information, pointer of variable);
    // pointer of varibale we will see later but for now understand the value we get from user 
    // we need to put (&) symbol before variable name in order to store value entered by user to the variable.
    scanf("%d", &userAge);

    printf("You are %d years old.\n", userAge);

    // We can also get a double from user

    float percent;
    printf("Enter your percentage\t");
    scanf("%f", &percent);

    printf("Your percentage is %f\n", percent);

// Below is code with double variable it is same as float but while inputting double from user we have to use (%lf) format specifier
    // double percent2;
    // printf("Enter your percentage\t");
    // scanf("%lf", &percent2);
    // printf("Your percentage is %f\n", percent2);

    // Let's take character as input from user.
    char grade;
    printf("Enter your Grade\t");
    scanf("%s", &grade);
    printf("Garde is %c\n", grade);

    // Let's take String from user.
    // char name[20];
    // printf("Enter Your name\t");
    // scanf("%s", name); // REMEMBER: We don't need (&) symbol in scanf Since name is array and will have different pointers.
    // printf("Your name is %s\n", name);

    // NOTE: scanf will only get string till first blank space after first space it will not except any values 
    //       For Eg: in above code we enter name has "Vinay" it will execute fine 
    //       but if we enter name with space like "Vinay Kanse" then this will only take "Vinay" as input everyting 
    //       after space will not be expected has this is how scanf works

    // fgets - function that gets the whole line
    // Now, let's see how fgets work
    // fgets(variable name to store value, integer size of characters to accept as input, keep this has stdin)
    char userFullName[20];
    printf("Enter your full name \t");
    fgets(userFullName, 20, stdin);
    printf("Your name is %s\n", userFullName);

    // There are other ways to take string input from user also.

    return 0;
}