#include<stdio.h>

void main(){
    FILE *fptr;
    fptr= fopen("Text.txt","r");
    if (fptr== NULL){
        printf("File dosen't exist!");
    }
    else{
        fclose(fptr);
    }
    
}