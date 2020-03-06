// Kullanıcıdan girilen değerin alfabetik olup olmadığını kontrol eder
#include <stdio.h>

int as(char ch){
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        return ch;
    }
    else
    {
        return 0;
    }
}

int main(){
    char ch;
    printf("Enter a value:");
    ch = getchar();
    if(as(ch))
    {
        printf("%c is a Alphabetic character\n",ch);
    }
    else
    {
        printf("%c is not a Alphabetic character\n",ch);
    }
}