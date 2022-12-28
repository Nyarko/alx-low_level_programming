#include <stdio.h>

/**
 * main - the overall function
 *
 * Return: zero is returned
 */

int main(void)
{
	int c;

	for (c = 122; c >= 97; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
