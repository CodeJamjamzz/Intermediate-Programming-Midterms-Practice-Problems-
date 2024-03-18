#include <stdio.h>

int main (){
    int array[] = {3, 9, 4, 5, 6, 7, 8}, temp = 0;

    int size = sizeof(array)/sizeof(array[0]);

    printf("Before: ");
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }

    for(int i = 0; i < size-1; i++){
        for (int j = i; j < size-1; j++){
            if(array[i] > array[i+1]){
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp; 
            }
        }
    }

    printf("\nAfter : ");
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}