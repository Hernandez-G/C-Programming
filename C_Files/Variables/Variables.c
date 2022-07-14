#include <stdio.h>

int main() 
{
    int x; //declaration
    x = 123; //initialization 
    int y = 321; //Declaration && initialization
    int age = 21;  //intger
    float gpa = 3.21; //floating point num
    char grade = 'A'; //single char > in ' ' 
    char name[] = "Bro"; //array of characters

    printf("You are %d years old\n", age);  //%d is decimal placeholer, [variable]
    printf("Hello %s\n", name);  //%s is string placeholer, [variable]
    printf("Your average grade is %c\n", grade);  //%s is character placeholer, [variable]
    printf("Your average gpa is %f\n", gpa);  //%s is float placeholer, [variable]


    return 0;
}


//Variables:
    /*  space in memory to store the value.
        variables act like the stored variables
        when declared.
        First, need to declare the data type of var.
    */