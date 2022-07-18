#include <stdio.h>

int main() {
    // int rows;
    // int columns;
    // char symbols;

    // printf("\nEnter # of rows: ");
    // scanf("%d", &rows);

    // printf("Enter # of columns: ");
    // scanf("%d", &columns);


    // printf("Enter a symbol to use: ");
    // scanf("%c", &symbols);




    for(int i = 0; i < 11; i++) 
    {
            // printf("\n%d ", i);

        for(int j = i; j >= 0; j--) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

// NESTED LOOP= loop inside another loop

// YOUTUBE: https://youtu.be/exbCDwrElcw