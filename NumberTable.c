#include<stdio.h>

void main(){
    int number;
    printf("Enter number to generate table: ");
    scanf("%d",&number);
    for (int i=1;i<=10;i++){
        printf("%d x %d = %d\n",number,i,i*number);
    }
}