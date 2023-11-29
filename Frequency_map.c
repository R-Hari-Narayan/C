//Trying to generate a frequency map of all elements in an array

#include <stdio.h>

typedef struct dictionary{
    int key;
    int value;
}dict;

void main(){
    dict a[]={1,2,3,4,5};
    printf("%d\n", a[0].key);
    printf("%d\n", a[0].value);
}