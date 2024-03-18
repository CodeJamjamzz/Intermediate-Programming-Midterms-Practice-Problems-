#include "function.h"

int main (){
    int row = 1;
    int num = getNum();
    triangle(num,row);
    center(num*2+1);
    lowertriangle(num, row);

    return 0;
}
