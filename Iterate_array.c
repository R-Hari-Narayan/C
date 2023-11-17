//Iterate array
#include<stdio.h>
void printarr(int *arr,int n);
void main(){
    int aadhar[]= {23,34,21,56,23,67,34};
    for (int i=0;i<7;i++){
        printf("%d\t",aadhar[i]);
    }
    printarr(aadhar,7);
}
void printarr(int *arr,int n){
    for (int i= 0; i<n;i++){
        printf("%d\t",arr[i]);
    }
}