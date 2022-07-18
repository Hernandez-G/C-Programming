#include <stdio.h>
#include <string.h>


// typedef char user[25];

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main() 
{
    User user1  = {"Gaby", "password", 2841401};
    User user2  = {"GabyH", "password", 232841401};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

    return 0;
}

// TYPEDEF =  reserved keyword that gives an exisiting datatype a "nickname"