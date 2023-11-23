// Let Us C
// Problem 9.1: Write a function that recieves 5 integers 
// and returns the sum, average and standard deviation of these numbers. 
// Call this function from main() and print the results in main().


#include <stdio.h>
#include <math.h>

void stats(int *sum, int *avg, double *stddev){
    int n1, n2, n3, n4, n5;
    printf("Enter 5 integers: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    *sum= n1 + n2 + n3 + n4 + n5;
    *avg= *sum/5;
    *stddev= sqrt((pow(n1-*avg,2)+pow(n2-*avg,2)+pow(n3-*avg,2)+pow(n4-*avg,2)+pow(n5-*avg,2))/5);
}

void main(){
    int sum, avg;
    double stddev;
    stats(&sum, &avg, &stddev);
    printf("Sum is %d\n", sum);
    printf("Average is %d\n", avg);
    printf("Standard deviation is %lf", stddev);
}