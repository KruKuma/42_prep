#include <stdio.h>
#include <stdbool.h>

int main() {

    // bool = boolean data type, used to store true (1) or false (0) values (1 byte), 
    // requires #include <stdbool.h>

    bool is_sunny = true;
    bool is_raining = 0;
    bool is_weekend = true;
    bool is_holiday = false;
    bool is_online = 1;

    printf("Is it sunny today? %s\n", is_sunny ? "Yes" : "No");
    printf("Is it raining today? %s\n", is_raining ? "Yes" : "No");
    printf("Is it the weekend? %s\n", is_weekend ? "Yes" : "No");
    printf("Is it a holiday? %s\n", is_holiday ? "Yes" : "No");
    printf("Is the user online? %s\n", is_online ? "Yes" : "No");

    return 0;
}
