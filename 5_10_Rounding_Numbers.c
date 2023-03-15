#include <stdio.h>
#include <math.h>

int roundFunc(double number);

int main(void){

    double inputVals[100];
    int counter = 0;

    puts("Enter a list of all the numbers you want to round or type in a letter to see the results.");
    puts("NOTE: This program terminates automatically after 100 entries.");

    //get all entries
    for(;counter < 100; counter++){
        double input;
        int returnValue = 0;
        printf("Entry %d: ", counter + 1);
        returnValue = scanf("%lf", &input);

        if(returnValue>0){
           inputVals[counter] = input;
        } else{
            break;
        }
    }

    //show all results
    for(int i = 0; i < counter; i++){
        double current = inputVals[i];
        printf("%d. Original Value: %f, Rounded Value: %d. \n", i+1, current, roundFunc(current));
    }


}


int roundFunc(double number){
    int roundedInt = floor(number + .5);
    return roundedInt;
}
