#include <stdio.h>
#include <math.h>

int getNum(){
    int num;

    printf("Enter name: ");
    scanf("%d", &num);

    return num;
}

int space1(int num){
    if(num == 0){
        return 1;
    } else {
        printf(" ");
    }
    return space1(num-1);
}

int star1(int row){
    int n = 0;
    if(n == row){
        return 1;
    } else {
        printf("*");
    }
    return star1(row-1);
}

int star2(int num){
    if(num == 0){
        return 1;
    } else {
        printf("*");
    } return star2(num-1);
}


int space2(int row, int num){
    
    if(row == num+1){
        return 1;
    } else {
        printf(" ");
    }

    //printf("%d", row);
    return space2(row+1, num);
}

int triangle(int num, int row){

    if(num == 0){
        return 1;
    }
    space1(num);
    star1(row*2-1);
    
        printf("\n");
    
    return triangle(num-1, row+1);
}

int center(int num){
    if(num == 0){
        return 1;
    } else {
        printf("*");
    } return center(num-1);
} 

int lowertriangle(int num, int row){
    int row1 = 1;
    if(num == 0){
        return 1;
    }
    printf("\n");
    space2(row1, row);
    star2(num*2-1);
    
    
    return lowertriangle(num-1, row+1);
}

