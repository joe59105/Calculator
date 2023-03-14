#include<stdio.h>

void rectangle_builder(int rows, int columns, char symbol){

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= columns; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }
}

int main(){
    int rows;
    int columns;
    char symbol;

    
    while (1)
    {   
        printf("\nEnter number of rows: ");
        scanf("%d", &rows);

        if (rows == -1)
        {
            break;
        }
        
        printf("Enter number of columns: ");
        scanf("%d", &columns);
        
        scanf("%c");

        printf("Enter symbol: ");
        scanf("%c", &symbol);

        rectangle_builder(rows, columns, symbol);
    }
    
    return 0;
}

