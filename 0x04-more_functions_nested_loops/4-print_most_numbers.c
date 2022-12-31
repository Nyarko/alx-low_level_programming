#include "main.h"

/**
 * print_most_numbers - function to print numbers
 *
 * Return: no return value for void function
 */

void print_most_numbers(void)
{
	int c = 48;
	/* code goes here */
	for (; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
