#include <stdio.h>
#include <ctype.h>

int main() {
    char unit; //C or F
    float temp; //temperature

    printf("\nIs the Temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C') {
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5 + 32);
        printf("The Temp in Ferenheit is: %.1f", temp);

    } else if (unit == 'F') {
        printf("\nEnter the temp in Ferenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The Temp in Celsius is: %.1f", temp);

    } else {

        printf("\n %c is NOT VALID", unit);

    }
    return 0;
}
