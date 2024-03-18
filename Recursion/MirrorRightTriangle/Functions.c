#include <stdio.h>

int getNum(){
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    return num;
}

void star(int row, int row2){
    if(row == row2){
        return;
    } else {
        printf("*");
        return star(row,row2+1);
    }
}

void space(int num, int row){
    if(row == num){
        return;
    } else {
        printf("_");
        return space(num, row+1);
    }
}

void triangle(int num, int row){
    int row2 = 0;
    if (row >= num){
        return;
    } else {
        
        space(num, row);

        star(row+1, row2);
        
        printf("\n");
        triangle(num, row + 1);
    }
}