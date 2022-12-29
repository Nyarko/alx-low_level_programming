#include "main.h"

/**
 * print_alphabet - function to print the alphabet
 *
 * Return: no return value for void function"
 */

void print_alphabet_x10(void)
{
	int a;
	int i = 0;

	while (i < 10)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		i++;
	}
	_putchar('\n');
}
