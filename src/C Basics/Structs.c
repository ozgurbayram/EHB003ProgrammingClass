#include <stdio.h>

typedef struct
{
    int age;
    char *name;
    enum {male,female} cinsiyet;
} Human;

int main(){
    char *cinsiyet[2] ={"erkek","kadın"};
    Human ali;
    ali.age =30;
    ali.name ="Ali";
    ali.cinsiyet = male;
    if (ali.cinsiyet==0)
    {
        ali.cinsiyet=*cinsiyet[0];
    }
    printf("%s'nin yasi: %d \n",ali.name,ali.age);
    printf("%s'nin cinsiyeti: %c \n",ali.name);

    return 0;
}