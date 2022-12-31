#include "main.h"

/**
 * more_numbers - function to print numbers
 *
 * Return: no return value for void function
 */

void more_numbers(void)
{
	int printIt(int m)
	{
		_putchar(m);
	}
	int c = 48;
	int i = 0;
	int j = 48;
	/* code goes here */
	for (; i < 10; i++)
	{
		if (c <= 57)
		{
			_putchar(c + i);
		}
	}
	printIt('\n');
}
