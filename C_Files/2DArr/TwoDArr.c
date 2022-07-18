#include <stdio.h>

int main() {

// EXAMPLE one: 

    // int numbers[2][3] = 
    // {
    //     {1, 2, 3}, 
    //     {4, 5, 6}
    // };

    int numbers[3][3];

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);


// first row
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;

// second row
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

// third row
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0; 
}

// 2D Array = an  arr where each element = an entire arr. 
// *matrix, grid, table of data

/*
    1. start off with 1D arr
    2. add {vals} 
    3. add two [] to var ; add double {} around val > int var[][] = {{val}, {val}}
    4. max size goes into 2nd []
    5. set max of arr in 1st []
*/