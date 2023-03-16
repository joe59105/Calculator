#include<stdio.h>

int main(){

    float sales, salary;

    while (1)
    {
        printf("\nEnter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
        if (sales == -1)
        {
            break;
        }

        salary = 200 + (0.09 * sales); //Salary is $200 plus 90% of sales

        printf("\nSalary is: $%f", salary);
        
    }
    
    return 0;
}