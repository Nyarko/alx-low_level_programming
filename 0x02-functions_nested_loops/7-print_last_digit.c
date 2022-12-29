#include "main.h"

/**
 * print_last_digit - function to print last digit
 * @n: value to work on
 *
 * Return: value to be returned is n
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		n *= -1;
	}

	m = n % 10;

	_putchar(m);
	return (m);
}
