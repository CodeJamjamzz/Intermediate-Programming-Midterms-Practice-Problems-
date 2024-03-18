#include <stdio.h>

void count(char *str, int *vow, int* con){
    while (*str != '\0'){
        if (*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' ||*str == 'a' ||*str == 'e' ||*str == 'i' ||*str == 'o' ||*str == 'u'){
            *(vow) += 1;
        } else 
            *(con)+= 1;

        str++;
    }

}
void display(int vow, int con){
    printf("Vowel: %d\nConsonant: %d", vow, con);
}

void getcha(){
    char str[10];

    int vow = 0, con = 0;
    printf("Enter string: ");
    fgets(str, sizeof str, stdin);
    
count(str, &vow, &con);
display(vow,con-1);

}