#include <stdio.h>
#include <string.h>

int main() {
    char noun[50] = {'\0'}; // Initialize noun with null characters
    char verb[50] = {'\0'}; // Initialize verb with null characters
    char adjective1[50] = {'\0'}; // Initialize adjective1 with null characters
    char adjective2[50] = {'\0'}; // Initialize adjective2 with null characters
    char adjective3[50] = {'\0'}; // Initialize adjective3 with null characters

    printf("Enter an adjective: ");
    fgets(adjective1, sizeof(adjective1), stdin); // Clear the input buffer after reading the name
    adjective1[strlen(adjective1) - 1] = '\0'; // Remove the newline character
    printf("Enter a noun (animal or object): ");
    fgets(noun, sizeof(noun), stdin); // Use %49s to prevent buffer overflow, leaving space for null terminator
    noun[strlen(noun) - 1] = '\0'; // Remove the newline character
    printf("Enter a second adjective: ");
    fgets(adjective2, sizeof(adjective2), stdin); // Clear the input buffer after reading the name
    adjective2[strlen(adjective2) - 1] = '\0'; // Remove the newline character
    printf("Enter a verb: ");
    fgets(verb, sizeof(verb), stdin); // Clear the input buffer after reading the name
    verb[strlen(verb) - 1] = '\0'; // Remove the newline character
    printf("Enter a third adjective: ");
    fgets(adjective3, sizeof(adjective3), stdin); // Clear the input buffer after reading the name
    adjective3[strlen(adjective3) - 1] = '\0'; // Remove the newline character

    printf("\nHere is your Mad Libs story:\n");
    printf("Once upon a time, there was a %s %s who loved to %s.\n" 
        "This %s %s was known for being very %s and always had a smile on its face.\n", 
        adjective1, noun, verb, adjective2, noun, adjective3);

    return 0;
}
