#include <stdio.h>
#include <string.h>

int main() {
    char name[25];

    printf("\nWhat's your name?");
    fgets(name, 25, stdin);

    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0)
    {
        printf("\nMust type name");

          printf("\nWhat's your name?");
    fgets(name, 25, stdin);

    name[strlen(name) - 1] = '\0';

    }


    printf("Hello %s", name);


    return 0;
}

// WHILE LOOPS = repeats part of the code unlimited times(possibly)/ 
// while some conditions remains true, a while loop might not execute at all depending on condition