#include <stdio.h>

int main(){
    
    int list[20];
    list[0] = 1;
    list[1] = 1;

    for(int i=2;i<=20;i++){
        list[i] = list[i-1] + list[i-2];
        printf("%d \n",list[i]);
    }
    
    return 0;

}