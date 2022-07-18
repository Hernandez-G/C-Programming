#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thur = 5, Fri = 6, Sat = 7};

int main() 
{
    enum Day today = Sun;
    printf("%d\n", today);

    if(today == Sun || today == Sat)
    {
        printf("\nParty Time!");

    } else {
        printf("Work!");
    }

    return 0; 
}

// ENUM = enumerations > named int identities > makes code readable
/*
    1. Enums 
    2. identifier 
    3. name values
*/