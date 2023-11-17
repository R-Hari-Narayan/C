#include<stdio.h>

void main(){
    int age= 22;
    int* ptr= &age;

    printf("%p\n",&age);
    printf("%p\n",ptr);
    printf("%p\n",&ptr);

}