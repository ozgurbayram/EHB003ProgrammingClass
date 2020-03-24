#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char grade;

    printf("Please Enter Your Degree:");
    scanf("%c",&grade);
    char c = toupper(grade);
    switch (c)
    {
    case 'A':
        printf("Awesome \n");
        break;
    case 'B':
        printf("Great \n");
        break;
    case 'C':
        printf("Good \n");
        break;
    case 'D':
        printf("Wow You Passed \n");
        break;
    case 'F':
        printf("! See you in summer school \n");
        break;
    default:
        printf("Error \n");
        break;
    }
    printf("Your Grade is %c \n ",c);

    return 0;
}