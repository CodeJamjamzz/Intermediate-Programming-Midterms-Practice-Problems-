#include <stdio.h>

int getnum(){
    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    return num;
}

int digit(int num){
    static int digits = 0;

    if (num != 0){
        digits++;
        return digit(num/10);
    } else {
        return digits;
    } 

}

int display(int digit){
    printf("%d", digit);
    return 0;
}