#include <stdio.h>

char slice(char str[],int a, int b);

void main(){
    char string[]="HelloWorld";
    slice(string,2,5);
}

char slice(char str[],int a, int b){
    char new[b-a+1];
    for (int i=0;i<b-a;i++){
        new[i]=str[a+i];
    }
    new[b-a]='\0';
    puts(new);
}