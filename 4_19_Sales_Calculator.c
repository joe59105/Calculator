#include <stdio.h>

int main()
{
    // Declare the prices as constant variables
    const float PRICE1 = 2.98;
    const float PRICE2 = 4.50;
    const float PRICE3 = 9.98;
    const float PRICE4 = 4.49;
    const float PRICE5 = 6.87;

    int productNumber;
    int quantitySold;
    int day = 1;
    float sales;

    // We are going to make the loop iterate for a span of seven days , that is one week
    while (day < 8)
    {
        printf("\nDAY %d\n", day);
        printf("%s", "Enter product number, quantity sold (-1 to quit) (99 to move to next day): \n");
        printf("Day %d \n", day);
        scanf("%d, %d", &productNumber, &quantitySold);

        // if the user wants to exit the program
        if (productNumber == -1)
        {
            break;
        } else if(productNumber == 99){
            day++;
            continue;
        }

        // Using the switch cases to represent different prices, then multiply the price selected with the quantity sold then increment the sales variable accordingly
        switch (productNumber)
        {
        case 1:
            sales += (PRICE1 * quantitySold);
            puts("Input received. Continue...");
            break;
        case 2:
            sales += (PRICE2 * quantitySold);
            puts("Input received. Continue...");
            break;
        case 3:
            sales += (PRICE3 * quantitySold);
            puts("Input received. Continue...");
            break;
        case 4:
            sales += (PRICE4 * quantitySold);
            puts("Input received. Continue...");
            break;
        case 5:
            sales += (PRICE5 * quantitySold);
            puts("Input received. Continue...");
            break;
        default:
            printf("%s", "Enter a valid product number between 1 and 5!\n\n");
            break;
        }
    }
    printf("\nThe total retail value of all sales is $%.3f", sales);
    return 0;
}
