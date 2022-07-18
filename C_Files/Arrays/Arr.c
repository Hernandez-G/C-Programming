#include <stdio.h>

int main() 
{
// EXAMPLE ONE:
    double prices[] = {5.0, 10.00, 15.00, 25.00, 20.00};

    printf("$%.2lf\n", prices[0]);

// EXAMPLE TWO:
    double prices[5];

    prices[0] = 5.0;
    prices[1] = 10.00;
    prices[2] = 15.00;
    prices[3] = 20.00;
    prices[4] = 25.00;

    printf("$%.2lf\n", prices[0]);

// EXAMPLE THREE:
    double prices[10] = {5.0, 10.00, 15.00, 25.00, 20.00};
    return 0;

    printf("$%.2lf\n", prices[0]);

}

// ARR = a data structure that can store many vals of the same data type

// 1. place brackets in front of var name
// 2. place { } around the val
// 3. print out one by calling valName[index]

// *arrays have fixed size = cannot change size after code has been compiled