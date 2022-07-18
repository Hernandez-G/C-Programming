#include <stdio.h>
#include <string.h>

int main() {

    char string1[] = "Gaby";
    char string2[] = "Gaby";
    // char string2[] = "Hernandez";

    // 1. String Lowercase
        char *strlwr(string1);
    // 2. String Uppercase
        strupr(string1);
    // 3. Appends string2 to end of string1
        strcat(string1, string2);
    // 4. Appends n characters from string2 to string1
        strncat(string1, string2, 1);
    // 5. Copy string 2 to string1
        strcpy(string1, string2);
    // 6. Copy n char of str2 to str1
        strncpy(string1, string2, 4);
    // 7. Sets all char of str to given character
        strset(string1, 'x', 1);

    // printf("%d", result);

    // 8. Returns str len as int
        int result = strlen(string1);
    // 9. Str compares all char
        int result = strcmp(string1, string2);
    // 10. Str compares n char
        int result = strncmp(string1, string2, 1);
    // 11. Str compare all (ignore case)
        int result = strncmpi(string1, string1);
    // 12. Str compare n char (ignore case)
        int result = strncmpi(string1, string1, 1);



    if (result == 0) 
    {
        printf("These string are the same");
    } else {
        printf("These str are not the same");
    }

    return 0;
}