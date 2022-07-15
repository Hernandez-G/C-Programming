#include <stdio.h>
#include <string.h>

int main() {

    char name[25];  //bytes
    int age;

    printf("\nWhat's your name?");
    // scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    
    printf("\nHow Old Are You?");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);

    return 0;
}

//scanf(); = read input, inverse of printf();

//&age = address of operator

//fgets(var, input size, stdin); = reads white space
