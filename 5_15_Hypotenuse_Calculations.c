#include <stdio.h>
#include <math.h>

double hypotenuse(double adjacent, double hypotenuse);

int main()
{
    double adjacent;
    double opposite;

    // printf("%s", 'enter the opposite side of the triangle');
    // printf('enter the opposite side of the triangle');
    puts("enter the opposite side of the triangle");
    scanf("%lf", &opposite);

    // printf("%s", 'enter the adjacent side of the triangle');
    // printf('enter the adjacent side of the triangle');
    puts("enter the adjacent side of the triangle");
    scanf("%lf", &adjacent);

    printf("%.2f", hypotenuse(adjacent, opposite));
}

double hypotenuse(double adjacent, double hypotenuse)
{
    return sqrt((adjacent * adjacent) + (hypotenuse * hypotenuse));
}