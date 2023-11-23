//Let Us C
//Problem 9.2: Write a program that defines a function that calculates power of one number raised to another
//and factorial value of a number in one call.

#include <stdio.h>

void pow_fact(float n, int pow, int n2, float*result, int*fact){
    float product= 1;
    for(int i= 0; i< pow; i++){
        product*= n;
    }
    *result= product;
    *fact= 1;
    if (n2!= 0 && n2!= 1){
        for(int i= 2; i<= n2; i++){
            *fact *= i;
        }
    }
}

void main(){
    int pow, n2, fact;
    float n, result;
    printf("Enter a number and its power(num pow): ");
    scanf("%f %d", &n, &pow);
    printf("Enter another number to find factorial: ");
    scanf("%d", &n2);
    pow_fact(n, pow, n2, &result, &fact);
    printf("Power= %f\nFactorial= %d", result, fact);
}