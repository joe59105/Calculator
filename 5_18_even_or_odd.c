#include <stdio.h>
#include <stdbool.h>

// Function prototypes for the functions that check whether a number is even or odd
bool is_even(int number) ;
bool is_odd(int number) ;


int main(void)
{
    int number;

        // This loop keeps asking the user to enter a number until they enter -1
    while (1) {
        printf("enter a number (Press -1 to exit):");
        scanf("%d",&number);
        // If the user enters -1, the loop is terminated
        if (number == -1)
        {
            break;
        }
        if (is_even(number)) {
            printf("number is even\n");
        }
        else if (is_odd(number)) {
            printf("number is odd\n");
        }
    }
    // The program returns 0 to indicate successful execution
    return 0;
}





bool is_even(int number)
{
    if (number % 2 == 0) return true;
    else return false;

}

bool is_odd(int number)
{
    if (number % 2 == 1 ) return true;
    else return false;

}










