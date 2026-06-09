#include <stdio.h>

int main() {

    // double = double-precision floating-point data type, used to store decimal numbers with 
    // more precision (8 bytes)

    double pi = 3.141592653589793;
    double e = 2.718281828459045;
    double golden_ratio = 1.618033988749895;
    double print = 19.99;
    double temperature = 16.5;

    printf("The value of pi is approximately %.15lf.\n", pi);
    printf("The value of e is approximately %.15lf.\n", e);
    printf("The value of the golden ratio is approximately %.15lf.\n", golden_ratio);
    printf("The price is $%.2lf.\n", print);
    printf("The temperature is %.1lf degrees Celsius.\n", temperature);

    return 0;
}
