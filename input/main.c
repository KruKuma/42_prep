#include <stdio.h>
#include <string.h>

int main() {

    int age = 0;
    float price = 0.0f; // Initialize price with 0.0
    char grade = '\0'; // Initialize grade with null character
    char name[30] = {'\0'}; // Initialize name array with null characters

    printf("Enter your age: ");
    scanf("%d", &age); // Note the use of %d for integer input
    printf("Enter the price: ");
    scanf("%f", &price); // Note the use of %f for float input
    printf("Enter your grade: ");
    scanf(" %c", &grade); // Note the space before %c to consume any leftover whitespace
    printf("Enter your name: ");
    scanf("%29s", name); // Use %29s to prevent buffer overflow, leaving space for null terminator

    printf("Age: %d\n", age);
    printf("Price: %.2f\n", price);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);

    getchar(); // Clear the input buffer after reading the name
    printf("Enter your fullname again: ");
    fgets(name, sizeof(name), stdin); // Clear the input buffer after reading the name
    printf("Name after fgets: %s\n", name); // This will show the name read by fgets, which may be empty if the buffer was cleared
    name[strlen(name) - 1] = '\0'; // Remove the newline character added by fgets

    return 0;
}
