#include <stdio.h>

int getNum(){
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    return num;
}

void star(int num, int row){
    if (num == row){
        return;
    } else {
        printf("*");
        return star(num-1, row);
    }
}

void triangle(int num, int row){
    int n = row;
    if (row == num){
        return;
    } else {
        star(num, n);
        printf("\n");
        triangle(num, row + 1);
    }
}