#include <stdio.h>
#include <string.h>

/**
 * reverse_array - function to reverse an array
 * @a: array variable
 * @n: size variable
 * return - no return value for void function
 */

void reverse_array(int *a, int n)
{
	int arrSize = n;
	int *b[arrSize];
	int i;
	int j = 0;

	for (i = n - 1; i >= 0; i--)
	{
		b[j] = &a[i];
		if (j != 0 && j < n)
		{
			printf(", ");
		}
		printf("%d", *b[j]);
		j++;
	}
	printf("\n");
}	
