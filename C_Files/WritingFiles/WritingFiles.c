#include <stdio.h>

int main()
{

//APPEND  
// can even add a specific address > replce "test.text" with address
    FILE *pF = fopen("test.txt", "a");

    fprintf(pF, "\nHennything can happen");

    fclose(pF);


//DELETE

if(remove("test.txt") == 0)
{
    printf("Success!");
}
else 
{
    printf("Failed!");
}


    return 0;
}