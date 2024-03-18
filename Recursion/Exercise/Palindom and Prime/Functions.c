#include <stdio.h>
#include <math.h>

int getNum(){
    int num;

    printf("Enter name: ");
    scanf("%d", &num);

    return num;
}


int isprime(int num){
    static int n = 2;
    if (n == num){
        return 1;
    } else if (num % n == 0){
        return 0;
    } else {
        n++;
        return isprime(num);
    }
}

int rem = 0, sum = 0;
int ispal(int num){
    
    if (num == 0){
        return sum;
    } else {
        sum *= 10;
        rem = num % 10; 
        sum += rem;
        
    } 
    return ispal(num / 10);
}

void dis(int res, int num){
    //printf("%d", res);
    if (res == num){
        printf("IS Palindrome");
    }else 
        printf("Not");
}

void display(int num){
    if (num >= 1){
        printf("Prime Number");
    } else {
        printf("Not Prime Number");
    }
}
















// int checkForPrime(int n1)
// {
//     if(i==1)
//     {
//         return 1;
//     }
//     else if(n1 %i==0)
//     {
//          return 0;
//     }     
//     else
//        {
//          i = i -1; 
//          checkForPrime(n1);//calling the function checkForPrime itself recursively
//       }