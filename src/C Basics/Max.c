#include <stdio.h>

int main(){
    int dizi[5] = {1,2,3,2,5};
    int i;
    int a = (sizeof(dizi)/sizeof(dizi[0])-1);
    printf("%d \n",a);
    int max = dizi[0];
    for (i=2; i <= 5; i++)
    {
        if (max<dizi[i])
        {
            max = dizi[i];
            break;
        }
    }

    printf("%d \n",max);
    
}