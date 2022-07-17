#include <stdio.h>

int findMax(int x, int y) 
{
    // if(x > y){
    //     return x;
    // }else {
        // return y;
    return (x > y) ? x : y;
    }



int main() {
    int max = findMax(3, 4);
    printf("%d", max);

    return 0; 
}


// Ternary Operator = shortcut to if/else statement when assigning /returning a value
// (condition) ? value if true : value if false