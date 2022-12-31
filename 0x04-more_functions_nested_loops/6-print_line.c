#include "main.h"

/**
 * print_line - function to print numbers
 * @n: number from buffer
 *
 * Return: no return value for void function
 */

void more_numbers(int n)
{
	int c = 95;
	int i;
	/* code goes here */
	for (i = 0; i < n; i++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
