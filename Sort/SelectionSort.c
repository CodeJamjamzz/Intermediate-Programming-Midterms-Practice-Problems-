#include <stdio.h>

int main (){
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1}, min = 0, temp = 0;

    int size = sizeof(array)/sizeof(array[0]);

    printf("Before: ");
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    
    for(int i = 0; i < size - 1; i++){
        int min = i;
        for(int j = i + 1; j < size; j++){
            if (array[min] > array[j]){
                min = j;
            }
        }
        temp = array[i]; 
        array[i] = array[min];
        array[min] = temp;
    }

    printf("\nAfter: "); 
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }



    //  for(int i = 0; i < size - 1; i++){
    //     for(int j = i + 1; j < size; j++){
    //         if (array[j] > array[j+1]){
    //             temp = array[j];
    //             min = array[j+1];
    //             array[j] = min;
    //             array[j+1] = temp;
    //         }
    //     }
    // }
}