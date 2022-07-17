#include <stdio.h>

void birthday(char name[], int age) {
    printf("\nHappy Birthday dear %s", name);
    printf("\nYou are %d years old!", age);

}

int main() {

    char name[] = "gaby";
    int age = 21;
    birthday(name, age);

    return 0;
}

// functions cannot see inside other functions
// pass variables into function args in main and in birthday function
