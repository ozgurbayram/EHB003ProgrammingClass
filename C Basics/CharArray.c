#include <stdio.h>

int main(){
    int sayi;
    printf("bir sayı giriniz:");
    scanf("%d",&sayi);
    
    for(int j=0;j<sayi;j++){
        for(int i=0;i<sayi;i++){
            printf("1");
            printf("0");
        }

        printf("\n");
    }
    return 0;
}