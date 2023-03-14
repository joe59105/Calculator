#include<stdio.h>
// To check whether numbers inputted are sides of a triangle, we need to check whether the --
// square of the largest side is equal to the sum of the squares of the other two or not -- Pythagora's theorem
//Therfore, we need to find the maximum number
double square(double side);
double find_max(double side1_squared, double side2_squared, double side3_squared);

int main(){
    double side1, side2, side3, max_side, side1_squared, side2_squared, side3_squared, area;

    while(1){

        printf("\nEnter the first side(Enter -1 to end loop): ");
        scanf("%lf", &side1);

        if(side1 == -1){
            break;
        }
        
        printf("Enter the second side: ");
        scanf("%lf", &side2);

        printf("Enter the third side: ");
        scanf("%lf", &side3);

        side1_squared = square(side1);
        side2_squared = square(side2);
        side3_squared = square(side3);

        max_side = find_max(side1_squared, side2_squared, side3_squared);

        if(max_side != side1_squared && max_side != side2_squared){//If maxside is not side1squared and also not side2squared, then, maxside will equal side3squared.
            if(side3_squared == (side1_squared + side2_squared)){//Check to see if side3squared is equal to side1squared + side2squared, if so, print the area, else, then they are not sides of a triangle.
                area = 0.50 * side1 * side2;
                printf("The area is %.2lf", area);
            }
            else{
                printf("These are not sides of a triangle");
            }
        }

        if(max_side != side2_squared && max_side != side3_squared){
            if(side1_squared == (side2_squared + side3_squared)){
                area = 0.50 * side2 * side3;
                printf("The area is %.2lf", area);
            }
            else{
                printf("These are not sides of a triangle");
            }
        }

        if(max_side != side1_squared && max_side != side3_squared){
            if(side2_squared == (side1_squared + side3_squared)){
                area = 0.50 * side1 * side3;
                printf("The area is %.2lf", area);
            }
            else{
                printf("These are not sides of a triangle");
            }
        }
    }

    
    return 0;
}

//A function that finds the maximum number of the squared sides
double find_max(double side1_squared, double side2_squared, double side3_squared){
    double max = side1_squared;
    if(side2_squared > max){
        max = side2_squared;
    }

    if(side3_squared > max){
        max = side3_squared;
    }

    return max;
}

//A function that squares a side
double square(double side){
    return side * side;
}