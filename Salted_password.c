#include<stdio.h>
#include<string.h>

void main(){
    char password[28];
    printf("Enter password(len<25): ");
    gets(password);
    strcat(password,"123");
    printf("Salted password is :%s",password);
}