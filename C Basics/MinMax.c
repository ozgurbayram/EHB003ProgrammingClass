#include <stdio.h>

int main(){
    int input;
    
    printf("Lütfen Bir Sayı Giriniz:");
    scanf("%d",&input);
    
    int max=input;
    int min=input;

    int x;

    for(x=1;x<=5;x++){
        printf("Lütfen Bir Sayı Giriniz:");
        
        scanf("%d",&input);
        if(input>max){
            max = input;
        }
        else if(input<min){
            min = input;
        }
    }

    printf("En Büyük Sayı: %d \n",max);
    printf("En Küçük Sayı: %d \n",min);

    return 0;
}