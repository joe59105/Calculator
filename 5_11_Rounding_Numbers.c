#include <stdio.h>;
#include <math.h>;
int roundToInteger(double number);
double roundToTenths(double number);
double roundToHundredths(double number);
double roundToThousandths(double number);


int main ()
{
    double num;
    printf("%s","Enter a number that you want to round:");
    scanf("%lf",&num);

    printf("The number you entered was %lf\n",num);
    printf("Rounded to the nearest integer it is %d\n",roundToInteger(num));
    printf("Rounded to the nearest Tenths it is %.1lf\n", roundToTenths(num));
    printf("Rounded to the nearest Hundredths it is %.2lf\n", roundToHundredths(num));
    printf("Rounded to the nearest Thousandths it is %.3lf\n", roundToThousandths(num)); 
    return 0;
}

int roundToInteger(double number) {
    return floor(number);
}
double roundToTenths(double number){
    return floor(number * 10 + .5) / 10;
}
double roundToHundredths(double number){
    return floor(number * 100 + .5) / 100;
}

double roundToThousandths(double number){
    return floor(number * 1000 + .5) / 1000;
}
