/* Insertion Sort Algorithm */
/* Average Time Complexity : o(n^2) */


#include <stdio.h>
#define SIZE 10

int main(){ 
	int array[SIZE] = {5,3,0,4,6,8,14,2,11,15};
	
	/* Prints unsorted array */
	printf("array before sorted: ");
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d ",array[i] );
	}

	/* Insertion sort start */
	int j,key,i;
    for (j =1; j < SIZE; j++)
    {
        key = array[j];
        i = j-1;
        while (i>=0 && array[i]>key)
        {
            array[i+1]=array[i];
            i =i-1;
        }
        array[i+1] = key;
                
    }
	/* Insertion sort end */

	/* Prints sorted array */
	printf("\narray after sorted: ");
	for (int b = 0; b < SIZE; ++b)
	{
		printf(" %d",array[b]);
	}
	
	printf("\n");

	return 0;
}