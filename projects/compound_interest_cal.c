#include <stdio.h>
#include <math.h>

int main() {

    double principal = 0.0f;
    double rate = 0.0f;
    int years = 0;
    int compounds_per_year = 0;
    double total_amount = 0.0f;

    printf("Compound Interest Calculator\n");
    printf("Enter the principal amount: ");
    scanf("%lf", &principal); // Note the use of %lf for double input
    printf("Enter the annual interest rate (as a percentage): ");
    scanf("%lf", &rate);
    rate /= 100; // Convert percentage to decimal
    printf("Enter the number of years: ");
    scanf("%d", &years);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &compounds_per_year);

    // Calculate compound interest using the formula: A = P(1 + r/n)^(nt)
    total_amount = principal * pow((1 + rate / compounds_per_year), (compounds_per_year * years));

    printf("Total amount after %d years: %.2lf\n", years, total_amount); // Print total amount with 2 decimal places
    
    return 0;
}

