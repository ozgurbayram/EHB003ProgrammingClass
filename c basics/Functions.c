#include <stdio.h>

int square(int y);

int main(){
    int x;
    for(x=1;x<10;x++){
        printf("%d \n",square(x));
    }
    return 0;
}

int square(int y){
    return y*y;
}