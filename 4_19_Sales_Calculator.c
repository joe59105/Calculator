#include <stdio.h>

int main()
{
    // Declare the prices as constant variables
    const float PRICE1 = 2.98;
    const float PRICE2 = 4.50;
    const float PRICE3 = 9.98;
    const float PRICE4 = 4.49;
    const float PRICE5 = 6.87;
    
    //Declare other variables with their respective data types 
    int productNumber;
    int quantitySold;
    int day = 1;
    float sales;

    // We are going to make the loop iterate for a span of seven days , that is one week
    while (day < 8)
    {
        //Initialize the currentProductPrice to be zero 
        int currentProductPrice = 0; 
        printf("\nDAY %d\n", day);
        printf("%s", "Enter product number, quantity sold (-1 to quit) (99 to move to next day): \n");
        printf("Day %d \n", day);
        // We use the scanf function to receive input for the productNumber and the quantitySold
        scanf("%d, %d", &productNumber, &quantitySold);

        // if the user wants to exit the program input -1
        if (productNumber == -1)
        {
            break;
        } 
        //If the user wants to advance to the next day input 99
        else if(productNumber == 99){
            day++;
            continue;
        }

       //get product price 
       // Here we use a switch statement that receives input the number (that is the case in the switch statement) corresponds to the price of a particular product 
        switch (productNumber)
        {
        case 1:
            currentProductPrice = PRICE1;
            break;
        case 2:
            currentProductPrice = PRICE2;
            break;
        case 3:
           currentProductPrice = PRICE3;
            break;
        case 4:
           currentProductPrice = PRICE4;
            break;
        case 5:
           currentProductPrice = PRICE5;
            break;
        default:
            printf("%s", "Enter a valid product number between 1 and 5!\n\n");
            break;
        }

        //Add these sales to the sales counter 
        // we first have an if check to see if the current product price is not 0 
        // then use the add assignment operator to add the currentProductPrice multiplied by the quantitySold
        if(currentProductPrice != 0){
            sales+= currentProductPrice * quantitySold;
            puts("Input received. Continue...");
        }
    }
    printf("\nThe total retail value of all sales is $%.3f", sales);
    return 0;
}





