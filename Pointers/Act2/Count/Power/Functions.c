#include <stdio.h>

int getNum(){
    int num;
    printf("Enter num: ");
    scanf("%d", &num);

    return num;
}

void power(int* base, int* exp, int* power){
    for(int i = 0; i < *exp; i++){
        *power *= *base;
    }
}

void display(int res){
    printf("Power: %d", res);
    return;
}