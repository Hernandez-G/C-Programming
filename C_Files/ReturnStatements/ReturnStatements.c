#include <stdio.h> 

double square(double x) 
{
return x * x;

}

int main() {
    double x = square(3.14);
    printf("%lf", x);


    return 0;
}

//need to change "void" to the data type being returned