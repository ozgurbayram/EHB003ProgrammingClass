#include "stdio.h"
#define SIZE 10

int main()
{
	int a[SIZE] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67};
	int i;
	int j;
	int hold;
	
	/* Bubble Sort */
	for (int b = 0; b < SIZE; ++b)
	{
		for (int i = 0; i < SIZE-1; ++i)
		{
			if (a[i]>a[i+1])
			{
				hold = a[i];
				a[i]=a[i+1];
				a[i+1] = hold;
			}
		}	
	}

	/* Histogram */
	printf("%s%13s%17s\n","Elements","Value","Histogram");
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%7d%13d         ",i,a[i]);
		for (int j = 1; j <= a[i]; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}