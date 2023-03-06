#include<stdio.h>

int main() {

    double principal, rate, interest_charge;
    int days, days_in_year;
    days_in_year = 365;
    while (1)
    {
        printf("\nEnter loan principal (-1 to end): ");
        scanf("%lf", &principal);
        if (principal == -1)
        {
            break;
        }

        printf("\nEnter interest rate: ");
        scanf("%lf", &rate);

        printf("\nEnter term of the loan in days: ");
        scanf("%d", &days);

        interest_charge = principal * rate * days / (double) days_in_year; //Interest charge is principal times rate times year. Note that days and days_in_year is an unsigned int, so I convert to double before dividing. If not, the value will be inaccurate.

        printf("\nThe interest charge is $%lf", interest_charge);
    }
    
    return 0;
}