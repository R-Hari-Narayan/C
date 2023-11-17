#include<stdio.h>

void reverse(int arr[],int n);

void main(){
    int array[]={1,2,3,4,5,6,7};
    reverse(array,7);
    for (int i=0; i<7;i++){
        printf("%d\t",array[i]);
    }
}

void reverse(int arr[],int n){
    int temp;
    for(int i=0; i<n/2; i++){
        temp= arr[i];
        arr[i]= arr[n-1-i];
        arr[n-1-i]= temp;
    }
}