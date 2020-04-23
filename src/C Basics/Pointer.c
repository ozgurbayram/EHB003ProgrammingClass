#include <stdio.h>

int main(){
    int i = 1;
    int *j = &i;
    
    // i Değşkenin Bellekteki Adresini Bulur
    printf("%u \n",j);

    // i  Deiğşkeninin Değerini Yazdırır 
    printf("%d \n",*j);
    
    return 0;    
}