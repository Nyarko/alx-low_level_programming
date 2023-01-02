#include <stdio.h>
#include <limits.h>
#include <math.h>

/**
 * main - function to print largest prime factor
 *
 * Return: return value is zero
 */

int main(void)
{
	/* initialising variables */
	long int n = 612852475143;
	long int i = 1;
	long int m = 0;
	long int p;
	long int myArr[10];
	/* loop to find prime factor */
	while (i <= n + 1)
	{
		/* to find factors */
		if (n % i == 0)
		{
			myArr[m] = i;
			m++;
		}
		i++;
	}
	for (; myArr[m] != 0; m++)
	{
		i = myArr[m];
		/* to find prime factors */
		for (p = 2; p <= sqrt(i); p++)
		{
			if ((i % p) == 1)
			{
				myArr[m] = i;
			} else
			{
				myArr[m] = 0;
			}
		}
	}
	for (; myArr[m] < 10; m++)
	{
		if (myArr[m] < myArr[m+1])
		{
			myArr[m] = myArr[m + 1];
		}
	}
	printf("%ld\n", myArr[m]);
	return (0);
}
