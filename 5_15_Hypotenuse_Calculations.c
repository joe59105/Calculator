#include <stdio.h>
#include <math.h>

double hypotenuse(double adjacent, double hypotenuse);

int main()
{
    double adjacent;
    double opposite;

    while (1) {
        puts("enter the opposite side of the triangle");
        scanf("%lf", &opposite);
        if (opposite == -1) {
            break;
        }
        puts("enter the adjacent side of the triangle");
        scanf("%lf", &adjacent);
        if (adjacent == -1)
        {
            break;
        }
        printf("The hypotenuse of the triangle is %lf", hypotenuse(adjacent, opposite));
        return 0;
    }
}

double hypotenuse(double adjacent, double hypotenuse)
{
    return sqrt((adjacent * adjacent) + (hypotenuse * hypotenuse));
}