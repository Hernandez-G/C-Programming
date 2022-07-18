#include <stdio.h>
#include <string.h>

int main()
{

// Exmaple One:
    // char *x = "X";
    // char *y = "Y";
    // char *temp;

    // temp = x;
    // x = y;
    // y = temp;

    // printf("x = %c\n", *x);
    // printf("y = %c\n", *y);

// Exmaple Two:
    char x[15] = "water";
    char y[15] = "soda";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);


    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}


// Common in sorting algorithms
// Added * so the char can print
// If lemonade replaced with soda > x =  
// in order to print something for x > [declare size]
