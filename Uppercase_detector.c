#include<stdio.h>
//Uppercase or lowercase
void main(){
    char letter;
    printf("Enter letter: ");
    scanf("%c",&letter);
    if(letter>='a' && letter<='z'){
        printf("Lower case character");
    }
    else if(letter >='A' && letter <='Z'){
        printf("Upper case character");
    }
    else{
        printf("Invalid input");
    }
    printf("%c",letter);
}