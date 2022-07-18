#include <stdio.h>
#include <string.h>

int main() 
{

    char cars[][10] = {"Mustang", "Corvette", "Camero"};
    strcpy(cars[1], "Tesla");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++) 
    {
        printf("%s\n", cars[i]);
    }


    return 0;
}

// cannot directly change one of the values
// HOW TO CHANGE/UPDATE:
    // 1. strcpy(var[index], "Str of new Val");
    // 2. set up for ( int i = 0; i < sizeof(var) / sizeof(var[index]); i++)
    // 3. then print