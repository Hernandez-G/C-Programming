#include <stdio.h>

int main() {

    for(int i = 1; i <= 20; i++) 
    {

        if(i == 13) 
        {
            // continue; //skipped 13
            break; //prints everything before 13
        }
        printf("%d\n", i);

    }

    return 0;
}

// CONTINUE = skips rest of code and forces the next iteration of the loop
// BREAK = exists a loop/switch