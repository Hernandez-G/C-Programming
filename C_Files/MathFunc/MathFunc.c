#include <stdio.h>
#include <math.h>

int main() {
    
    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("\n%lf", F); //for AB, F-J
    // printf("\n%d", D); == for int

    return 0;
}

/* dont forget to include <math.h>
    sqrt = square root
    pow = power (num, to the power of)
    round = round number
    ceil = round number up
    floor = round down
    fabs = turn negative num into positive 
    log = logrithmic 
    sin 
    cos
    tan
*/