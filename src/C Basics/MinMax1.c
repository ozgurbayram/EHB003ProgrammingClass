#include <stdio.h>
#define SIZE 5

int main(){

    int dizi[SIZE] = {1,5,2,6,4};
    int max = dizi[1];
    int min = dizi[0];

    for (int i = 0; i < SIZE; ++i)
    {
        if (dizi[i]>max)
        {
            max = dizi[i];
        }
        if (dizi[i]<min) 
        {
            min = dizi[i];
        }
    }
    
    printf("Max value is %d\n",max);
    printf("Min value is %d\n",min);

    return 0;
}