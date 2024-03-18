#include <stdio.h>

int getwidth(){
    int width;

    printf("Enter width: ");
    scanf("%d", &width);

    return width;
}

int getheight(){
    int height;

    printf("Enter height: ");
    scanf("%d", &height);

    return height;
}

void build(int width, int height){
    printf("\n");
    if(width % 2 == 0){
        for(int point = 0; point <= width/2+2; point++){
            if(point == width/2 || point == width/2+1){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    } else {
        for(int point = 0; point <= width/2+2; point++){
            if(point == width/2+1){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

for(int i = 0; i < height-2; i++){
    for(int star = 0; star < width+2; star++){
            if(star == 0 || star == width+1){
                printf(" ");
            } else {
                printf("*");
            }
        }
    printf("\n");
    }

for(int bot = 0; bot < width+2; bot++){
    printf("*");
    }
    return;
}









