#include "main.h"

/**
 * more_numbers - function to print numbers
 *
 * Return: no return value for void function
 */

void more_numbers(void)
{
	int c;
	int i = 0;
	int j = 0;
	/* code goes here */
	while (i < 10)
	{
		c = 48;
		for (; j < 14; j++)
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
		i++;
	}
}
