#include "main.h"

/**
 * print_square - function to print numbers
 * @size: number from buffer
 *
 * Return: no return value for void function
 */

void print_square(int size)
{
	int i;
	int j;
	/* code goes here */
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
