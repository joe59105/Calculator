#include<stdio.h>

int main(){
    //declare all variables
    int account_number; //account number can have a negative value
    unsigned int mortgage_amount; //mortgage amount cannot have a negative value
    unsigned int mortgage_term; //mortgage term cannot have a negative value
    float interest_rate; //interest rate is a decimal
    unsigned int amount_payable; //amount payable cannot have a negative value
    unsigned int payable_interest; //payable interest cannot have a negative value
    

    while (1) //Loop continues indefinitely
    {        
        //Get values for the needed variables from users
        printf("\nEnter account number (-1 to end): "); //Enter -1 to break the loop
        scanf("%d", &account_number); //%d is the placeholder for int

        if (account_number == -1) //This statement is used to break the loop if the user enters -1
        {
            break;
        }
        
        printf("\nEnter mortgage amount (in dollars): "); //print to user
        scanf("%u", &mortgage_amount); //%u is the placeholder for unsigned int and mortgage_amount was declared earlier as an unsigned int

        printf("\nEnter mortgage term (in years): ");
        scanf("%u", &mortgage_term);

        printf("\nEnter interest rate (as a decimal): ");
        scanf("%f", &interest_rate); //%f is the placeholder for float

        //Formula given in the textbook
        amount_payable = (mortgage_amount * interest_rate * mortgage_term) + mortgage_amount;
        payable_interest = amount_payable / (mortgage_term * 12);
        
        printf("\nThe monthly payable interest $%u", payable_interest); //Print out the payable interest and remember that %u is the placeholder for unsigned int
    }
    return 0;
}