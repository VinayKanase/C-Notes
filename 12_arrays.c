#include <stdio.h>

int main()
{
    // Array is collection of data with continues memory loation
    // Arrays are useful for storing list of data 
    // For Eg: Names of people or roll numbers and so on.

    // Now, think we have to store list of 100 numbers, it is not good to create 100 variables for 100 numbers this is where Arrays are amazing.
    // Variables and arrays are very similar.
    // data-type varname[length of array];
    int luckyNumbers[] = {9, 12, 23, 34}; 
    // Elements in array are seprated by comma(,)
    // Every element in Array has index for accessing a single inforamtion of data
    // Index starts from 0 and so on
    // Let's see how we use index to print  number from the luckNumbers array
    printf("%d\n", luckyNumbers[0]); //  Output: 9
    // Similarly, we can print other numbers of array
    printf("%d\n", luckyNumbers[1]); //  Output: 12
    printf("%d\n", luckyNumbers[2]); //  Output: 23

    // Changing values at index in an array
    luckyNumbers[1] = 200; // Rewrites value at index 1 to 
    printf("%d\n", luckyNumbers[1]); //  Output: 200

    // Now up there on line 12 we set our array elements but what if we just want to initalize array
    // int numbers[length];
    int numbers[10]; //  This is how we have to initalize array we have to set nomber of elements while initalizing it.
    numbers[1] = 10;
    printf("%d\n", numbers[0]); // This will return some random number Since, we have not set any number on 0th index of numbers array
     
    //  Array of characters is String
    char sentence[] = "Array";

    
    return 0;
}