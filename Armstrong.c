#include<stdio.h>
#include<math.h>

void main(){
    int number;
    printf("Enter a 3 digit number to check whether it is Armstrong no. or not: ");
    scanf("%d",&number);
    int x= number%10;
    int number2= (number-x)/10;
    int y= number2%10;
    int z= (number2-y)/10;

    if (pow(z,3)+pow(y,3)+pow(x,3)==number){
        printf("Number entered is an Armstrong number");
    }
    else{
        printf("Number entered is not an Armstrong number");
    }
}