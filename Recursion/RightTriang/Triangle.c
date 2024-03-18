#include <stdio.h>

int getNum(){
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    return num;
}

void star(int row, int row2){
    if (row2 == row){
        return;
    } else {
        printf("*");
        return star(row, row2+1);
    }
}

void triangle(int num, int row){
    int row2 = 0;
    if (row >= num){
        return;
    } else {
        star(row+1, row2);
        printf("\n");
        triangle(num, row + 1);
    }
}