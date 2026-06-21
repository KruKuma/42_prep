#include <stdio.h>

int main() {

    // Format specifiers are used in printf() to specify the type of data being printed

    int age = 25;
    float price = 19.99;
    float price2 = 5.5;
    double pi = 3.141592653589793;
    int day = 21;
    int month = 6;
    int year = 2026;
    char currency = '$';
    char name[] = "Alice";
    int num = 2;

    float price3 = 18.75;
    float price4 = 3.5;

    printf("Name: %s\n", name); // %s for strings
    printf("Age: %d\n", age); // %d for integers
    printf("Pi: %.10lf\n", pi); // %.10lf for double floating-point numbers with 10 decimal places
    printf("Price: %.2f\n", price); // %.2f for floating-point numbers with 2 decimal places
    printf("Price2: %.2f\n", price2); // %.2f for floating-point numbers with 2 decimal places
    printf("Currency: %c\n", currency); // %c for characters
    printf("Shoe Price: %c%.2f\n", currency, price); // Combining %c and %.2f for formatted output
    printf("Date: %02d.%02d.%d\n", day, month, year); // %02d for integers with leading zeros
    printf("Left Padding: %-05d\n", num); // %-05d for integers with left padding
    printf("Right Padding: %05d\n", num); // %05d for integers with right padding
    printf("Price3: %+7.2f\n", price3); // %+7.2f for floating-point numbers with 2 decimal places with a total width of 7 characters
    printf("Price4: %+7.2f\n", price4); // %+7.2f for floating-point numbers with 2 decimal places with a total width of 7 characters

    return 0;
}
