#include <stdio.h>

int main(){
    int i = 1;
    int *j = &i;
    
    // Prints memory adrees of i variable
    printf("%u \n",j);

    // Prints value of i
    printf("%d \n",*j);
    
    return 0;    
}
