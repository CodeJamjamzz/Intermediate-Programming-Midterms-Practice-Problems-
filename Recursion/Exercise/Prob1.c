#include <stdio.h>

int nat(int n);

int main (){
    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    nat(num);

    return 0;
}

int nat(int n){
    if(n<= 50){
        printf(" %d ", n);
        return nat(n + 1);
    }
}