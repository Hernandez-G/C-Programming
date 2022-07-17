#include <stdio.h>
#include <string.h>

int main() {

    char string1[] = "Gaby";
    char string2[] = "Hernandez";

    // 1. String Lowercase
        // char *strlwr(string1);
    // 2. String Uppercase
        // strupr(string1);
    // 3. Appends string2 to end of string1
        // strcat(string1, string2);
    // 4. Appends n characters from string2 to string1
        // strncat(string1, string2, 1);
    // 5. Copy string 2 to string1
        // strcpy(string1, string2);
    // 6. Copy n char of str2 to str1
        // strncpy(string1, string2, 4);
    // 7. Sets all char of str to given character
        // strset(string1, 'x', 1);
    // 8. Reverses str
        strrev(string1);

    printf("%s", string1);

    return 0;
}