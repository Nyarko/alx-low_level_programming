#include <stdio.h>

/**
 * main - the overall function
 *
 * Return: zero is returned
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int suMin;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = j + 1; l <= 57; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);

					suMin = i + j + k + l;

					if (suMin != 227)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
