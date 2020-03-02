#include <stdio.h>

int main(){
    int sum;
    int x;
    sum=0;

    for(x=1;x<=5;x++){
        sum =sum + x;
        printf("%d \n",sum);
    }
    
    printf("Sum of numbers between 0 and 50:%d \n",sum);

    return 0;
}