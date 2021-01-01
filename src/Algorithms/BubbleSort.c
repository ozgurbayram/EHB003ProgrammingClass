/* Bubble	 Sort Algorithm */
/* Average Time Complexity :  О(n^2) */

#include <stdio.h>
#define SIZE 10

int main(void){ 
	int array[SIZE] = {5,3,0,4,6,8,14,2,11,15};
	int hold;
	
	/* Prints unsorted array */
	printf("array before sorted: ");
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d ",array[i] );
	}

	/* Bubble sort start */
	for (int p = 0; p <SIZE; ++p)
	{
		for (int a = 0; a < SIZE-1; ++a)
		{
			if (array[a]>array[a+1])
			{
				hold = array[a];
				array[a] = array[a+1];
				array[a+1]=hold;
			}
		}
	}
	/* Bubble sort end */

	/* Prints sorted array */
	printf("\narray after sorted: ");
	for (int b = 0; b < SIZE; ++b)
	{
		printf(" %d",array[b]);
	}
	
	printf("\n");

	return 0;
}