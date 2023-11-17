#include<stdio.h>

typedef struct ComplexNo
{
    int real;
    int imag;
}comp;


void main(){
    comp A= {1,2};
    comp *ptr;
    ptr= &A;
    printf("%d + i%d",ptr->real,ptr->imag);
}