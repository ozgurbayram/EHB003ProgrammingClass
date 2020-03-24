#include <stdio.h>

int main(){
    int flag,n,i = 0;
    printf("Enter an integer:");
    scanf("%d",&n);

    for (i = 2; i <= n/2; ++i){
        if (n % i == 0){
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printf("%d is not a aviable to be prime number \n",n);
    }
    else {
        if (flag == 0)
            printf("%d is a prime numbe \n",n);
        else
            printf("%d is not a prime number \n",n);
    }

    return 0;
}