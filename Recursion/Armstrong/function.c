#include <stdio.h>
#include <math.h>

int getNum(){
    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    return num;
}

int n = 0;
int NoDig(int num){
    if(num == 0){
        return n;
    }
    n++;
    return NoDig(num/10);
}

// int countDigits(int num, int count = 0) {
//     if (num == 0) {
//         return count;
//     }
//     return countDigits(num / 10, count + 1);
// }

int sum = 0; 
int isArmstrong(int num, int dig){
    if(num == 0){
        return sum;
    } else {

        //printf("%d", dig);
        
        int rem = num % 10;
        sum += pow(rem, dig);
        
        return isArmstrong(num/10, dig);
    }
}

void display(int res, int num){

    //printf("%d", res);
    if(res == num){
        printf("IS ARMSTRONG");
    } else 
        printf("IS WEAK");
}
