#include<stdio.h>

void main(){
    int price[3];
    printf("Enter price of Item1: ");
    scanf("%d",&price[0]);

    printf("Enter price of Item2: ");
    scanf("%d",&price[1]);
    
    printf("Enter price of Item3: ");
    scanf("%d",&price[2]);
    int Total= price[0]+price[1]+price[2];
    printf("Total price is %d\n",Total);
    printf("Total price with GST is %f",Total+(0.18*Total));
}