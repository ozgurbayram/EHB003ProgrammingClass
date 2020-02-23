#include <stdio.h>

#define bool int
#define true 1
#define false 0

int main(void){
    bool x = true;
    bool y = false;
    if(x){
        printf("True\n");
    }
    if(!y){
        printf("This also True\n");
    }
}