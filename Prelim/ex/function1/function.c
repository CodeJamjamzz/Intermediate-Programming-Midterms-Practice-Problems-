#include <stdio.h>

void createArray(int la[], int size){
	int i, j, num;
	for(i = 0; i < size; i++){
		scanf("%d", &num);
		for(j = 0; j < i; j++){
			if(la[j] == num){
				printf("inoutted integer already exsts, try another num\n");
				i--;
				break;
			}
		}
		if (j == i){
			la[i] = num;
		}
	}
}