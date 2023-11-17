#include<stdio.h>

void square(int n);
void _square(int *n);

void main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    square(number);
    printf("number is %d\n",number);
    _square(&number);
    printf("number is %d\n",number);
}

void square(int n){
    printf("Square of %d is %d\n",n,n*n);
}

void _square(int *n){
    *n=(*n)*(*n);
    printf("Square of %d is %d\n",*n,*n);
}