#include "Functions.h"

int main (){
    int base = getNum();
    int exp = getNum();
    int powe = 1;

    power(&base, &exp, &powe);
    display(powe);
}