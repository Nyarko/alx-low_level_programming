#include "main.h"

/**
 * print_number - function to print number
 * @n: variable to hold number
 *
 * Return: no value returned for void function
 */

void print_number(int n)
{
	int diver = 1;
	int counter = 1;

	for (; diver <= n / 10; diver *= 10)
	{
		counter = counter + 1;
	}
	for (; counter > 0; counter--)
	{
		n %= diver;
		_putchar(n + 48);
		diver /= 10;
	}
	_putchar('\n');
}
