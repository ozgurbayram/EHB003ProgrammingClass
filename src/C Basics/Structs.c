#include <stdio.h>

typedef struct
{
    int age;
    char *name;
    enum {male,female} cinsiyet;
} Human;

int main(){
    Human ali;
    ali.age =30;
    ali.name ="Ali";
    ali.cinsiyet = male;

    printf("alinin yasi: %d \n",ali.age);
    printf("alinin cinsiyeti: %c \n",ali.cinsiyet);

    return 0;
}