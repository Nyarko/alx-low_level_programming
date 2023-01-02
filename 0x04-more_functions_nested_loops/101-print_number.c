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
	int o = n;
	int diver = 1;
	int counter = 1;
	
	/* starting with printing digits below 10 */
	if (n < 10)
	{
		m += n + 48;
		_putchar(m);
	}
	else
	{
		/* getting value for how many times to run */
		while (diver <= n / 10)
		{
			diver *= 10;
			counter++;
		}

		/* code to print digits */
		while (counter > 0)
		{
			/* this runs when digit < 10 */
			if (n < 10)
			{
				m %= diver;
			}
			else
			{
				m = o / diver;
			}
			m += 48;
			_putchar(m);

			/* resetting m */
			m -= 48;

			/* updating 'o' for next use */
			m *= diver;
			m = o - m;

			/* handler for zeros before last digit */
			if (m < (diver / 10))
			{
				_putchar(48);
			}

			/* reducing diver for next use */
			diver /= 10;
			o = m;
			counter--;
		}
	}
	_putchar('\n');
}
