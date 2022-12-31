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
	/* code goes here */
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (size - j >= i)
				{
					_putchar(35);
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
