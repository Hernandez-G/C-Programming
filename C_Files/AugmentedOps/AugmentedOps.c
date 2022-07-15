#include <stdio.h>

int main() {

    int x = 10;
    // x = x + 2;
    // x+= 2;

    // x = x - 3;
    // x-=3;

    // x = x * 3;
    // x*=3;

    // x = x / 3;
    // x/=3;

    // x = x % 3;
    x%=2;

    printf("%d", x);
    return 0;
}

//AUGMENTED ASSIGNMENT OPERATORS
    /* used to replace a statement where an operator takes
        a variable as one of its arguments and assigns the result
        back to the same variable.
    */