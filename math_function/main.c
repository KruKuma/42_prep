#include <stdio.h>
#include <math.h>

int main() {

    double num1 = 16.0;
    double num2 = 5.0;
    double num3 = 3.5;
    double num4 = 3.99;

    // Square root
    double sqrt_num1 = sqrt(num1);
    printf("Square root of %.2f is %.2f\n", num1, sqrt_num1);

    // Power
    double power = pow(num1, num2);
    printf("%.2f raised to the power of %.2f is %.2f\n", num1, num2, power);

    // Absolute value
    double abs_num2 = fabs(-num2);
    printf("Absolute value of -%.2f is %.2f\n", num2, abs_num2);

    // Ceiling and floor
    double ceil_num1 = ceil(num3);
    double floor_num1 = floor(num4);
    printf("Ceiling of %.2f is %.2f\n", num3, ceil_num1);
    printf("Floor of %.2f is %.2f\n", num4, floor_num1);

    // Rounding
    double round_num1 = round(num3);
    printf("Rounded value of %.2f is %.2f\n", num3, round_num1);

    // Logarithm
    double log_num1 = log(num1);
    printf("Natural logarithm of %.2f is %.2f\n", num1, log_num1);

    return 0;
}
