#include<stdio.h>

void main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);

    age>=18?printf("Eligible to vote"):printf("Not eligible to vote");  //Ternary operator  
}