#include <stdio.h>
#include <stdbool.h>

int main() {
    float temp = 29;

    if(temp <= 0 || temp >= 30 || temp > 29) {
        printf("\nThe weather is bad!");
    } else {
        printf("\nThe weather is good!");
    }

    return 0;
}

// (||) Or operator = checks if at least one condition is true
// thats why we call <stdbool.h>