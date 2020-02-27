#include <stdio.h>

int sayilar[10];
int t =0;

int main(){
    for(int i;i<10;i++){
        printf("Lütfen Bir Sayi Giriniz");
        scanf("%d",&sayilar[i]);

        t= t+sayilar[i];
    }
    printf("%d",t);
}