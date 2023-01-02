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
	/* loop to find prime factor */
	while (i <= n + 1)
	{
		/* to find factors */
		if (n % i == 0)
		{
			/* to find prime factors */
			for (p = 2; p <= sqrt(i); p++)
			{
				if ((i % p) == 1)
				{
					m = i;
					/* assign largest factor */
					/*if (i > m)
					{
						m = i;
					}*/
				}
			}
		}
		i++;
	}
	printf("%ld\n", m);
	return (0);
}
