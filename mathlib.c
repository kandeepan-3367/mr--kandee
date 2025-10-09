#include <stdio.h>
#include <math.h>   // Required for math functions

int main() {
    double number = 9.75;

    printf("Original number: %lf\n", number);

    // Truncates the decimal part
    printf("trunc(%lf) = %lf\n", number, trunc(number));

    // Square root
    printf("sqrt(%lf) = %lf\n", number, sqrt(number));

    // Power (number raised to 2)
    printf("pow(%lf, 2) = %lf\n", number, pow(number, 2));

    // Floor (rounds down)
    printf("floor(%lf) = %lf\n", number, floor(number));

    // Ceil (rounds up)
    printf("ceil(%lf) = %lf\n", number, ceil(number));

    return 0;
}
