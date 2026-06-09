#include <stdio.h>

int main() {

    // char[] = array of characters, used to store strings (sequence of characters)

    char name[] = "Alice";
    char greeting[] = "Hello, World!";
    char food[] = "Pizza";
    char city[] = "New York";
    char quote[] = "To be or not to be, that is the question.";

    printf("My name is %s.\n", name);
    printf("%s\n", greeting);
    printf("I love %s.\n", food);
    printf("I want to visit %s.\n", city);
    printf("Famous quote: \"%s\"\n", quote);

    return 0;
}
