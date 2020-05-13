#include "stdio.h"
#define SIZE 10

int main()
{
	/* code */
	int n[SIZE];
	int i;

	for (int i = 0; i < SIZE; ++i)
	{
		n[i] = 0;
	}
	printf("%s%13s\n","Element","Value");

	for (int i = 0; i < SIZE; ++i)
	{
		/* code */
		printf("%7d%13d\n",i,n[i]);
	}
	return 0;
}