#include <stdio.h>

int main() {
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("item1: $%8.2f\n", item1);
    printf("item2: $%8.2f\n", item2);
    printf("item3: $%8.2f\n", item3);

}

//FORMAT SPECIFIERS
    /*defines and formats types of displayed data
        %c = char
        %s = string (array of char)
        %f = float
        %fl = double
        %d = integer

        %.1 = decimal precision
        %1 = minimum field width
        %- = left align
    */
        