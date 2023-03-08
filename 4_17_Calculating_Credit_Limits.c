
#include <stdio.h>

int main()
{
    // declare variables
    int accountNumber;
    float oldCreditLimit;
    float newCreditLimit;
    float currentBalance;

    int i = 0;

    while (i < 3)
    {
        //Input the account number
        printf("%s", "Enter account number: ");
        scanf("%d", &accountNumber);

        //Input the old credit limit
        printf("%s", "Enter old credit limit: $");
        scanf("%f", &oldCreditLimit);

        //Input the current balance 
        printf("%s", "Enter current balance: $");
        scanf("%f", &currentBalance);

        // The new creditLimit is the old creditLimit / 2 
        newCreditLimit = oldCreditLimit / 2;
        printf("This customer's new credit limit is $ %.2f \n", newCreditLimit);

        if (currentBalance > newCreditLimit)
        {
            printf("This customer's balance exceeds the new credit limit by $ %.1f \n", currentBalance - newCreditLimit);
        }

        printf("%s", "\n\n");
        i++;
    }
    return 0;
}
