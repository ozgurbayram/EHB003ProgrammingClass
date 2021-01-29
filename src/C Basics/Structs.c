#include <stdio.h>

typedef struct
{
    int age;
    char *name;
    enum {male,female} sex;
} Human;

int main(){
    char *sex[2] ={"erkek","kadın"};
    Human ali;
    ali.age =30;
    ali.name ="Ali";
    ali.sex = male;
    if (ali.sex==0)
    {
        ali.sex=*sex[0];
    }
    printf("%s's age: %d \n",ali.name,ali.age);
    printf("%s's sex: %c \n",ali.sex);

    return 0;
}
