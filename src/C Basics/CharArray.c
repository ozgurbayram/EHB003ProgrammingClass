#include <stdio.h>

int main(){
    char *days[7] = {"pazartesi","salı","çarşamba","perşembe","cuma","cumartesi","pazar"};
    for (int i = 0; i < 7; i++)
    {
        printf("%s \n",days[i]);
    }
    
}