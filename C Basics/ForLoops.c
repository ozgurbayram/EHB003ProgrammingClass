#include <stdio.h>

int main(){
    int gs;
    int eb = 0;
    for(int i=1;i<6;i++){
        printf("Lütfen %d. Sayıyı Giriniz:",i);
        scanf("%d",&gs);
        if(gs>eb){
            eb = gs;
        }
    }
    printf("eb : %d \n",eb);

    return 0;
}
