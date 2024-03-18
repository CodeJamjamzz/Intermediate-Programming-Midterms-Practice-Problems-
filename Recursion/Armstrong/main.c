#include "Functions.h"

int main (){
    int num = getNum();
    int num2 = NoDig(num);
    int res = isArmstrong(num, num2);
    display(res, num);
}