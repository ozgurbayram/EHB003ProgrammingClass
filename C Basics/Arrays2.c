#include <stdio.h>

#define ROW 5
#define COL 2

int main(){
    int a[ROW][COL] = {1,2,3,4,5,6,7,8,9,10};
    int b[ROW][COL] = {11,12,13,14,15,16,17,18,19,20};
    int c[ROW][COL];

    int i,j;

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("[%d][%d] = %d\n",i,j,c[i][j]);
        }
        
    }
    

}