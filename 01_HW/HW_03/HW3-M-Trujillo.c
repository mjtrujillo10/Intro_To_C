// Manuel J. Trujillo-Silva
// HW03: Simple Conditional and Loops
#include <stdio.h>

int main() {

    // Declaring my variables
    char user_name[128];
    int user_input, even_sum, odd_sum, even_count, odd_count;
    
    // Ask for user input (Loop)
    printf("Welcome. Please input your first name.\n");
    scanf("%s", user_name);
    printf("Please input an integer number.\n");
    scanf("%d", &user_input);
    
    // Manipulation of variables
    while (user_input != 0) {
        if (user_input%2 == 0) {
            even_sum = user_input + even_sum;
            ++even_count;
            printf("Please input another integer.\n");
            scanf("%d", &user_input);
            continue;
        } else {
            odd_sum = user_input + odd_sum;
            ++odd_count;
            printf("Please input another integer.\n");
            scanf("%d", &user_input);
            continue;
        }
    }
    
    // Provide output to user
    output_func(user_name, even_count, even_sum, odd_count, odd_sum);
    
    
    
}

int output_func(char user_name[], int even_count, int even_sum, int odd_count, int odd_sum) {
    printf("%s, the numbers you entered are broken down as follows:\n", user_name);
    printf("You entered %d even numbers with a total value of %d.\n", even_count, even_sum);
    printf("You also entered %d odd numbers with a total value of %d.\n", odd_count, odd_sum);
    return 0;
}
