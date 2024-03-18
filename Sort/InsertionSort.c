#include <stdio.h>

int main (){
    int array[] = {6, 1, 7, 4, 2, 9, 8, 5, 3}, temp = 0;

    int size = sizeof(array)/ sizeof(array[0]);

    printf("Before: ");
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }

    for(int i= 1; i < size; i++){
        temp = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > temp){
            array[j +1] = array[j];
            j--;
        } 
        array[j + 1] = temp;
    }

    printf("\nAfter: "); 
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}