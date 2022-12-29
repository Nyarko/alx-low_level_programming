#include "main.h"

/**
 * print_sign - function to print sign
 * @n: variable to work on
 *
 * Return: return value is varied
 */

int print_sign(int n)
{
	unsigned int r = 0;
	int s = 0;

	if (n > 0)
	{
		r = 1;
		s = 43;
	}
	else if (n < 0)
	{
		r = -1;
		s = 45;
	}
	else
	{
		r = 0;
		s = 48;
	}
	_putchar(s);
	return (r);
}
