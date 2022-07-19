#include <stdio.h>

void printAge(int *pAge)
{
    // printf("You are %d years old", age);
    printf("You are %d years old\n", *pAge); //dereference
}

int main()
{
// value = address
    int age = 21;
    int *pAge = &age;


// ON WAY TO:
    // int age = 21;
    // int *pAge = NULL; //good practice to assign NULL if declaring a pointer
    // pAge = &age
    
    
    // printf("address of age %p\n", &age);
    // printf("value of age %p\n", pAge);

    // printf("value of age %d\n", age);
    // printf("value at stored address: %d\n", *pAge);

    // printf("value of age: %d bytes\n", sizeof(age));
    // printf("value of pAge: %ld bytes\n", sizeof(pAge));

    printAge(pAge);

    return 0;
}
// POINTER = a reference that holds memory address to another variable
// * = indirect operator
