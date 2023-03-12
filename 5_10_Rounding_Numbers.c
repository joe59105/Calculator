#include <stdio.h>
#include <math.h>

int roundFunc(double number);

int main(void){
    int returnValue = 0;
    do{
        double input;
        printf("Type in a number. (Or input a letter to end program)\n");
        returnValue = scanf("%lf", &input);

        if(returnValue>0){
            printf("Original number : %.6f, Rounded number : %d \n", input, roundFunc(input));
        }

    } while(returnValue > 0);

}


int roundFunc(double number){
    int roundedInt = floor(number + .5);
    return roundedInt;
}
