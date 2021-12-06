#include <stdio.h>
#include <math.h>
int main()
{
    printf("%f\n", 9.8); // Expected Output: 9.8 Actual Output: 9.800000

    //  Mathematical Operations
    // + | Addition
    // - | Subraction
    // * | Multiplication
    // / | Division (Returns Quotiont)
    // % | Division (Returns Remainder)
    // In printf we can also do mathematical operations
    printf("Addition of 3.4 + 8.6 is%f\n", 3.4 + 8.6);
    printf("Multiplication of 2 x 5 is %d\n", 2 * 5);
    // Now let's try multiplying integer number to decimal number
    printf("Multiplication of 2 x 3.5 is %f\n", 2 * 3.5);
    // NOTE: Above multiplication of integer number with decimal number returns deciaml numbers.
    // Operation between 2 numbers
    // Integer Integer = Integer
    // Integer Float = Float

    // For Divison,
    printf("%d\n", 5 / 4); // This will return number in integer Since, both 5 and 4 are integers  
    printf("%f\n", 5 / 4.0); // This will return number in float number Since, both 5 is integer and 4.0 is float  

    // Creating Number Variables and printing 
    int x = 15;
    printf("%d\n", x);
    int y = 40;
    printf("%d\n", x * y);

    // Let's see some functions C offers us ?related to Maths
    // To use math related functions we need to include math.h 
    // pow - Function used to find  any power of any number. It returns decimal number. Eg: 2^3
    printf("2^3 is %f\n", pow(2, 3));
    // sqrt - Function that returns square root of number. 
    printf("Square Root of 4 is %f\n", sqrt(4));
    // ceil - gives the hightest value of entered number
    printf("Ceil of 3.23 is %f\n", ceil(3.23));
    // floor - Returns minimum value of entered number
    printf("Floor Value of 3.78 is %f\n", floor(3.78));

    // There are so many Math functions in C we can find it on Google these were only some few to show.  
    return 0;
}