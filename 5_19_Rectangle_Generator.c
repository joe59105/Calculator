#include <stdio.h>

int getInput(char prompt[]);
void generateRectangle(int length, int depth);

int main(void){
    int prefLength;
    int side1 = getInput("Type in a number for the first side (between 1 and 50)");
    int side2 = getInput("Type in a number for the second side (between 1 and 50)");

    generateRectangle(side1, side2);
}

int getInput(char prompt[]){
    int prefLength=0;
    puts(prompt);

    scanf("%d", &prefLength);
    //force a loop until the user enters a valid value
    while(1){
        if(prefLength < 1 || prefLength > 50 ){
            puts("Invalid number! Please type in a number between 1 and 50.");
            scanf("%d", &prefLength);
        } else {
            return prefLength;
        }
    }
}


void generateRectangle(int side1, int side2){
    char patternString[side1+1];
    patternString[side1] = '\0';
    //build the row
    for(int i = 0; i < side1; i++){
        patternString[i] = '*';
    }
    //print the row
    printf("%s \n", patternString);
    if(side2 > 1){
        generateRectangle(side1, side2-1); //build the next row
    }
}
