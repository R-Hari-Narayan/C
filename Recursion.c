//Sum of n natural numbers using recursion
#include <stdio.h>

int sum(int n);

void main(){
    int n;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    int total= sum(n);
    printf("Total is %d",total);
}

int sum(int n){
    if (n==1){
        return 1;
    }
    int total=0;
    total=n+sum(n-1);
    return total;
}