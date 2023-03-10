#include <stdio.h>

int main() {
    int num;


    // Loop to read five numbers
    for (int i = 0; i < 5; i++) {
        // Prompt user to enter a number
        printf("Enter a number between 1 and 30: ");
        // Read the number entered by the user
        scanf("%d", &num);

        // Check if the number is valid (between 1 and 30)
        if (num < 1 || num > 30) {
            // If the number is invalid, print an error message and ask the user to enter another number
            printf("Invalid number. Please enter a number between 1 and 30.\n");
            // Decrement the loop variable to repeat the current iteration and ask the user to enter another number
            i--;
            // Continue to the next iteration of the loop
            continue;
        }

        // If the number is valid, print that number of asterisks on a single line
        for (int j = 0; j < num; j++) {
            printf("*");
        }
        // Print a newline character to move to the next line
        printf("\n");
    }

    // Exit the program with a success status code
    return 0;
}
