#include <stdio.h>

/**
 * main - the overall function
 *
 * Return: zero is returned
 */

int main(void)
{
	int hex;
	int i;

	for (hex = 0; hex < 16; hex++)
	{
		if (hex > 9)
		{
			for (i = 97, i <= 102; i++)
			{
				putchar(i);
			}
		}
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
