// WAP that interchanges elements at odd position with elements at even position in
// an array of 10 elements.

#include <stdio.h>

void main(){
    int temp, arr[]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i=0; i<10; i+=2){
        temp= arr[i];
        arr[i]= arr[i+1];
        arr[i+1]= temp;
    }
    for(int i= 0; i<10; i++){
        printf("%d ", arr[i]);
    }
}