#include <stdio.h>

void main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if (number%2==0){
        printf("%d is divisible by 2",number);
    }
    else{
        printf("%d is not divisible by 2",number);
    }
}