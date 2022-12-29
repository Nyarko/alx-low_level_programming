#include "main.h"

/**
 * print_alphabet - function to print the alphabet
 *
 * Return: no return value for void function"
 */

void print_alphabet(void)
{
	int a;
	/* code starts here */
	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
