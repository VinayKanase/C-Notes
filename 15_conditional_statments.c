#include <stdio.h>
// If statments are conditional statments
// depending on condition they can do different tasks
/*
// Syntax for if statment
if(condition){

}
In if statments the condition written in parentheses if the condition is true then the code or statments 
between open and closed curly brackets will be executed .

// Syntax for if-else statemnt
if(condition){
    // 1
} else {
    // 2
}
If else is same as if the only difference is in if statment if condition is true then the block of code is executed at 1
and else the condition in if is false then only block of {} in else will be executed.

// Syntax for elseif statments
if(condition){

}
else if(condition){

}
Now, think we want to check multiple possibilites of conditions, this is not easy to write with if-else statments so we will use else if 
first if condition is checked if true then the block of code inside it is executed if false then it is passed it else if condition  then else if condition is checked if true then code inside it is executed and if false then it moves to nest and so on.

We can add as much required else if statements and also can have and else at last so if all conditions are false then code inside else will be executed.
*/

// Now, we know functions let's use functions
int min(int num1, int num2)
{
    int min;
    if (num1 < num2)
    {
        min = num1;
    }
    else
    {
        min = num2;
    }
    return min;
}

int max(int num1, int num2, int num3)
{
    int max;
    if (num1 >= num2 && num1 >= num3) // && is a and operater
        max = num1;                   // If we have only one line in block of code we can skip curly brackets.
    else if (num2 >= num3)
        max = num2;
    else
        max = num3;
    return max;
}

int main()
{
    printf("Minimum of 5 and 4 is %d\n", min(5, 4));
    printf("Maximum of 20, 30 and 25 is %d\n", max(20, 30, 25));
    return 0;
}