#include "main.h"

/**
 * print_number - function to print number
 * @n: variable to hold number
 *
 * Return: no value returned for void function
 */

void print_number(int n)
{
	/* initialising variables */
	int m = 0;
	int o = 0;
	int diver = 1;
	int counter = 1;
	/* starting with printing digits below 10 */
	if (n > 0 && n < 10)
	{
		m += n + 48;
		_putchar(m);
	}
	else
	{
		/* checking for negative input */
		if (n < 0)
		{
			n *= -1;
			o = n;
			_putchar(45);
		}
		/* getting value for how many times to run */
		while (diver <= n / 10)
		{
			diver *= 10;
			counter++;
		}
		/* code to print digits */
		while (counter > 0)
		{
			m = o / diver;
			m += 48;
			_putchar(m);
			/* resetting m */
			m -= 48;
			/* updating 'o' for next use */
			m *= diver;
			m = o - m;
			/* reducing diver for next use */
			diver /= 10;
			o = m;
			counter--;
		}
	}
	_putchar('\n');
}
