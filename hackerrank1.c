#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c",&ch);
    scanf("%s",s);
    gets(sen);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    puts(sen);
    return 0;
}