#include <stdio.h>
#include <stdbool.h>

int main() 
{

//DATA TYPES/ VARIABLES
    int x;   //declaration
    x = 123;     //initialization 
    int y = 321;     //Declaration && initialization
    int age = 21;    //intger
    float gpa = 3.21;    //floating point num > 4 bytes, 32 bits of precision, stores 6 -7 digits
    double d = 3.12232;  //8 bytes > 64 bits of precision, 15 - 16 digits > [%lf]
    char grade = 'A';    //single char > in ' ' 
    char name[] = "there";     //array of characters
    bool e = false;     // 1 = true, 0 = false; > 1 byte;

    // char f = 120;       //[%d] as decimal number || [%c] num as a char
    // unsigned char g = 255;  //disregards (-nums) > (0 to +255) [%c]

    // short h = 32768; //(-32,767 to +32,767) [%d]
    // unsigned short i = 65536; //(0 to +65,535) [%d]


    // int j = 21474836471; //(-2,147,483,647 to +2,147,483,647) [%d]
    // unsigned int k = 42949672951; //(0 to +4,294,967,295) [%u]


//TESTING
    printf("You are %d years old\n", age);  //%d is decimal placeholer, [variable]
    printf("Hello %s\n", name);  //%s is string placeholer, [variable]
    printf("Your average grade is %c\n", grade);  //%s is character placeholer, [variable]
    printf("Your average gpa is %f\n", gpa);  //%s is float placeholer, [variable]
    printf("Your average gpa is %lf\n", d);  //%lf is float placeholer, [variable]
    printf("Your average gpa is %0.6lf\n", d);  //%s is float placeholer, [variable]
    printf("%d\n", e); //bool
    // printf("%c\n", f); //char f
    // printf("%d\n", g); //char f
    printf("%d\n", j);
    printf("%u\n", k);




    return 0;
}


//Variables:
    /*  space in memory to store the value.
        variables act like the stored variables
        when declared.
        First, need to declare the data type of var.
    */