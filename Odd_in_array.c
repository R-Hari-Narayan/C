#include<stdio.h>

int count(int arr[],int n);

void main(){
    int arr[]={32,56,12,7,3,45,23,67,45,34,34,12};
    printf("No. of odd numbers in array are: %d",count(arr,12));
}

int count(int arr[],int n){
    int cnt=0;
    for (int i=0; i<n; i++){
        if ((arr[i]%2)!=0){
            cnt+=1;
        }
    }
    return cnt;
}