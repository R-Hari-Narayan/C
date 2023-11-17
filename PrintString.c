#include<stdio.h>
int len(char arr[]);
void main(){
    char name[10];
    printf("Enter your name: ");
    fgets(name,10,stdin);
    puts(name);
    int length= len(name);
    printf("%d",length);
}
int len(char arr[]){
    int count=0;
    for (int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}
