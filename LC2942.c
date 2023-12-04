//Leet code problem 2942 //
#include <stdio.h>
#include <stdlib.h>

int* findWordsContaining(char words[4][6], int wordsSize, char x, int* returnSize) {
    int *output= (int *)malloc(wordsSize * sizeof(int));
    int outputSize= 0;
    for(int i=0; i< wordsSize; i++){
        int j= 0;
        while (words[i][j] != '\0'){
            if (words[i][j] == x){
                output[outputSize]= i;
                printf("%d\t", i);
                outputSize++;
                j++;
                break;
            }
            j++;
        }  
    }
    *returnSize= outputSize;
    return output;
}

void main(){
    char words[4][6]= {"apple", "ball", "cat", "dog"};
    int returnSize;
    int *output= findWordsContaining(words, 4, 'a', &returnSize);
}