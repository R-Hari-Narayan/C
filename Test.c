//Leet code problem 2942 //
#include <stdio.h>

int* findWordsContaining(char** words, int wordsSize) {
    for(int i=0; i< wordsSize; i++){
        int j= 0;
        while (words[i][j] != '\0'){
            printf("%c", words[i][j]);
            j++;
        }
    }
}

void main(){
    char words[][6]= {"apple", "ball", "cat", "dog"};
    int returnSize;
    findWordsContaining(&words[0], 4);
}