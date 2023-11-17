#include<stdio.h>

int main(){
    signed char ch1= 'A';
    unsigned char ch2= 'A';
    printf("%c= %d= %c\n", ch1, ch1, -65);
    printf("%c= %d= %c", ch2, ch2, 65);
    return 0;
}