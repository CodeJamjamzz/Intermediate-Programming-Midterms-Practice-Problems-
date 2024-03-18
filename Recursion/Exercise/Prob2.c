#include <stdio.h>

int sum(int n);

int main (){
    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    printf("The sum of numbers from 1 to %d:", num);
    printf("\n%d", sum(num));

    return 0;
}

int sum(int n){
    if(n == 1){
        return 1;
    } else 
        return n + sum(n-1);
}