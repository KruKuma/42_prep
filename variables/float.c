#include <stdio.h>

int main() {

    // float = floating-point data type, used to store decimal numbers (4 bytes)

    float pi = 3.14159;
    float e = 2.71828;
    float golden_ratio = 1.61803;
    float print = 19.99;
    float temperature = 16.5;

    printf("The value of pi is approximately %.5f.\n", pi);
    printf("The value of e is approximately %.5f.\n", e);
    printf("The value of the golden ratio is approximately %.5f.\n", golden_ratio);
    printf("The price is $%.2f.\n", print);
    printf("The temperature is %.1f degrees Celsius.\n", temperature);

    return 0;
}
