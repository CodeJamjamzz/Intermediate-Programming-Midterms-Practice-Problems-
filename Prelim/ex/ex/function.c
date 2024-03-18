#include <stdio.h>

int getheight(){
    int num;
    printf("Enter height: ");
    scanf("%d", &num);
    return num;
}

int getwidth(){
    int num;
    printf("Enter width: ");
    scanf("%d", &num);
    return num;
}

void ex(int height){
    int n = 1, j = height, a = 0;
    for(int row = 0; row < height; row++){
        //a *= 0;
        for(int star = 1; star <= height; star++){
            if(star == n || star == j){
                printf("*");
            } else {
                printf(" ");
            }
        }
        n++; j--;
        printf("\n");
    }
}

void ex2(int width, int height){
    for(int row = 1; row <= height; row++){
        for(int star = 1; star <= row; star++){
            if(star == row){
                printf("*");
            } else 
                printf("_");
        }
        printf("\n");
    }
}
