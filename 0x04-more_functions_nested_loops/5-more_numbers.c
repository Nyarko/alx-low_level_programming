#include "main.h"

/**
 * more_numbers - function to print numbers
 *
 * Return: no return value for void function
 */

void more_numbers(void)
{
	int c = 48;
	int i;
	int j;
	/* code goes here */
	for (i = 0; i < 10; i++)
	{
		c = 48;
		for (j = 0; j < 15; j++)
		{
			if (c >= 58 || j > 9)
			{
				c = 48;
				_putchar(49);
				c += j - 10;
			}
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
