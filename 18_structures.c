#include <stdio.h>
#include <string.h>

// Structure it is very important has it can model program we will see how to use structures data type
// Structures can have different data type variables as part of them
// lets write structure for student

struct Student // Structures  generally have nmaes starting with capital letters
{
    char name[50];
    int age;
    int rollNumber;
    double pointer;
};

int main()
{
    struct Student student1; // Creating instance of Student structure as student1

    // Defining values of student1
    student1.age = 19;
    student1.rollNumber = 245;
    // For strings or array of characters we can not directly assign values like above we use string copy function to do so.
    strcpy(student1.name, "Suresh");

    // printing values of student1
    printf(" Student Name: %s\n Roll Number: %d\n", student1.name, student1.rollNumber);

    // We can create as much required Student structure instances
    struct Student student2;
    student2.age = 18;
    student2.rollNumber = 12;
    strcpy(student2.name, "Rambo");

    return 0;
}