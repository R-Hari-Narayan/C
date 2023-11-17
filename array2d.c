#include<stdio.h>

void main(){
    int table[2][10];
    for(int i=0;i<10;i++){
        table[0][i]= 2*(i+1);
        table[1][i]= 3*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d\t",table[0][i]);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        printf("%d\t",table[1][i]);
    }
}