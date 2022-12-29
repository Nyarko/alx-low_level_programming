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
	int a = n;
	
	if (a < 0)
	{
		a *= -1;
	}

	m = a % 10;

	_putchar(48 + m);
	return (m);
}
