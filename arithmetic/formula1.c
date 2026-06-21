#include <stdio.h>

int main() {
    
    int x = 5;
    int y = 10;
    int z = 3;

    // Basic arithmetic operations
    int sum = x + y; // Addition
    int sub = y - x; // Subtraction
    int mul = x * y; // Multiplication
    int div = y / x; // Division
    int mod = y % z; // Modulo

    x++; // Increment x by 1
    y--; // Decrement y by 1

    x += 2; // Add 2 to x
    y -= 3; // Subtract 3 from y

    x *= 2; // Multiply x by 2
    y /= 2; // Divide y by 2

    // Print the results
    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mul);
    printf("Division: %d\n", div);
    printf("Modulo: %d\n", mod);
    printf("Incremented x: %d\n", x);
    printf("Decremented y: %d\n", y);
    printf("x after addition: %d\n", x);
    printf("y after subtraction: %d\n", y);
    printf("x after multiplication: %d\n", x);
    printf("y after division: %d\n", y);

    return 0;
}
