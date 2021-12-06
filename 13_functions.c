#include <stdio.h>
    // Functions are block of code written for specific purpose there are many advantages of functions
    //  They are reuseable
    // Functions need to be called to execute it.

    // MAIN function
    // we can see we have int main function 
    // People also call function as methods but in C we genrally call it function only
    // now know that while we compile and execute our code main function is automatically called

    /*
    function first needs return-type 
         Return-type is the data that function is going to return 
         Let's see some data types:
            void - when we want to write a function that does not return anything we say it as void function
            return tpes are similar to data types
            int - returns integer 
            float - returns decimal number
            and so on.
        next we write a name of function
        then we have parenthesis() 
        then we have curly brackets{}
        whatever we write after opening curly brackets and before closing curly brackets is considered code inside function

    ##  Parameters of function when we want to pass data to function we use parameters 
            Eg greetUserWithName Line 34 function
        we can use multiple parameters
            Eg userInfo Line 40 
    */
// Creaating or writing a function.
// REMEMBER: Only writing a function will ddo nothing we should also call it in order to execute.
void greetUser(){ 
    printf("Hello User\n");
}

void greetUserWithName(char userName[]){
    printf("Hello %s\n", userName); 
}

void userInfo(char userName[], int age){
    printf("Hello %s you are %d years old.\n", userName, age);
}

int main()
{
    // Calling a function 
    greetUser(); 

    // Working of functions after call  
    // Since we know main function in C is called automatically and code executes from line to line but 
    // When we call another function on any line in main function the code inside the function is executed and then the next line in main function is execuited

    printf("\n");

    greetUserWithName("Vinay"); // passing the value "Vinay" to function 
    // we can use same greetUserWithName function for different people
    greetUserWithName("Tony");  
    greetUserWithName("Obama");

    printf("\n");

    userInfo("Vinay", 17);
    userInfo("Tony", 25);
    userInfo("Obama", 35);
    return 0;
}