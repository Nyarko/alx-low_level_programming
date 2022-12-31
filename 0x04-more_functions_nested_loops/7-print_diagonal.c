#include "main.h"

/**
 * print_diagonal - function to print numbers
 * @n: number from buffer
 *
 * Return: no return value for void function
 */

void print_diagonal(int n)
{
	int c = 92;
	int i;
	int j;
	/* code goes here */
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i - j == 0)
			{
				_putchar(c);
			}
			else
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
