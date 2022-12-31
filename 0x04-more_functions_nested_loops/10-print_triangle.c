#include "main.h"

/**
 * print_triangle - printing triangles
 * @size: number from buffer
 *
 * Return: no return value for void function
 */

void print_triangle(int size)
{
	int i;
	int j;
	int hash;
	/* code goes here */
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;
		while (i <= size)
		{
			j = size;
			while (j > i)
			{
				_putchar(' ');
				j--;
			}
			hash = 0;
			while (hash < i)
			{
				_putchar('#');
				hash++;
			}
			_putchar('\n');
			i++;
		}
	}
}
