#include<stdio.h>

void main(){
    int num;
    do{
        printf("Enter number: ");
        scanf("%d",&num);
        printf("%d\n",num);
        if (num%7==0){
            break;
        }
    }
    while(1);
    printf("End");
}