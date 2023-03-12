#include <stdio.h>

void generateSquare(int length);
void generator(int length, int depth);

int main(void){
    int prefLength;
    puts("Type in a number between 1 and 50.");

    scanf("%d", &prefLength);
    if(prefLength < 1 || prefLength > 50 ){
        puts("Invalid number! Please type in a number between 1 and 50.");
    } else {
        generateSquare(prefLength);
    }
}

void generateSquare(int length){
   generator(length, length);
}

void generator(int length, int depth){
    char patternString[length + 1];
    //build the row
    for(int i = 0; i < length; i++){
        patternString[i] = '*';
    }
    //print the row
    printf("%s\n", patternString);
    if(depth > 1){
        generator(length, depth -1); //build the next row
    }
}
