#include <stdio.h>

int fibo(int n);

int main (){
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    fibo(num);
    return 0;
}

int fibo(int n){
    int times = 0, num2 = 0, num1 = 1;
    
    if(times >= n){
        return 1;
    } else {
        printf("%d", num2);
        times++;
        return num2 + fibo(num1 + num2);
    }
}