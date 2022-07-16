#include <stdio.h>

int main() {

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade) {
        case 'A':
            printf("Perfect!");
            break;
        case 'B':
            printf("Good!");
            break;
        case 'C':
            printf("Mid!");
            break;
        case 'D':
            printf("Almost an F");
            break;
        case 'F':
            printf("Fail");
            break;
        default:
            printf("Please enter only valid grades");
        

    }

    return 0;
}


/* Switch Statements: an alternative way to use many "else if" statements */
// breaks exist so all of the "printf's" dont print when executed