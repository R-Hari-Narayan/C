#include<stdio.h>

void Namaste();
void Bonjour();

void main(){
    char lang;
    printf("Enter i for indian and f for french: ");
    scanf("%c",&lang);
    if (lang=='i'){
        Namaste();
    }
    else if (lang=='f'){
        Bonjour();
    }
    else{
        printf("Invalid input");
    }
    
}

void Namaste(){
    printf("Namaste\n");
    //return;
}

void Bonjour(){
    printf("Bonjour\n");
}