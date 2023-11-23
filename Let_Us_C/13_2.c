//Write a program to copy the contents of a 5-element integer array into 
//another array in reverse order

#include <stdio.h>

void main(){
    int arr[]= {1, 2, 3, 4, 5};
    int arr2[5], j=0;
    for(int i= 4; i>=0; i--){
        arr2[j]= arr[i];
        j++;
    }
    for (j=0; j<5; j++) printf("%d  ", arr2[j]);
}