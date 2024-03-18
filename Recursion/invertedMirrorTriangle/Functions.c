#include <stdio.h>

int getNum(){
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    return num;
}

void space(int row, int row2){
    if(row == row2){
        return;
    } else {
        printf("_");
        return space(row,row2+1);
    }
}

void star(int num, int row){
    if(row == num){
        return;
    } else {
        printf("*");
        return star(num, row+1);
    }
}

void triangle(int num, int row){
    int row2 = 0;
    if (row >= num){
        return;
    } else {

        space(row+1, row2);
        star(num, row);
        
        printf("\n");
        triangle(num, row + 1);
    }
}