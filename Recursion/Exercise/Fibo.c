#include <stdio.h>
int num;
int getnum(){
    printf("Enter num: ");
    scanf("%d", &num);

    return num;
}

int fibo(int num1, int num2){
    static int i = 0;
    
    if (i == num){
        return 0;
    } else {
        i++;
        printf("%d ", num1);
        int newnum = num1 + num2;
        num1 = num2;
        num2 = newnum;

        return fibo(num1, num2);
    } 
}