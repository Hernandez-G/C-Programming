#include <stdio.h>


void hello(char[], int); //function prototype 

int main() {
    char name[] = "gaby";
    int age = 24;
    hello(name, age);

 return 0;   
}

void hello(char name[], int age) 
{

    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}
// FUNCTION PROTOTYPE
/*
ensures that calls to a function are made with the right
arguments.
*/

// IMPORTANT NOTES:
/*
    1. C compilers do not check for parameter matching
    2. Missing arguments will result in unexpected behavior
    3. Function prototype = call out errors if arguments are missing
*/