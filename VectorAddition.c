#include<stdio.h>

typedef struct Vector
{
    int x;
    int y;
}vect;

void main(){
    vect A;
    vect B;
    printf("Enter 1st vector components: \n");
    scanf("%d",&A.x);
    scanf("%d",&A.y);
    printf("Enter 2nd vector components: \n");
    scanf("%d",&B.x);
    scanf("%d",&B.y);
    printf("Resultant vector is : %di + %dj",A.x+B.x,A.y+B.y);

}