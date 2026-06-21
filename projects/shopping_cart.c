#include <stdio.h>

int main() {

    char item[50];
    float price = 0.0f;
    int quantity = 0;

    printf("What item would you like to purchase? ");
    scanf("%49s", item); // Use %49s to prevent buffer overflow, leaving space for null terminator
    printf("Enter the price of the item: ");
    scanf("%f", &price); // Note the use of %f for float input
    printf("Enter the quantity of the item: ");
    scanf("%d", &quantity); // Note the use of %d for integer input

    float total = price * quantity; // Calculate total cost

    printf("You have purchased %d %s(s) at $%.2f each.\n", quantity, item, price);
    printf("Total cost: $%.2f\n", total); // Print total cost with 2 decimal places
    
    return 0;
}
