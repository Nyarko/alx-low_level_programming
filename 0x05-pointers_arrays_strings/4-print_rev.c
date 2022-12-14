#include <string.h>
#include <unistd.h>

int _putchar(char c);

/**
 * print_rev - function to print string in reverse
 * @s: variable to be printed
 * _putchar - manual function
 * Return: no return for void function
 */

void print_rev(char *s)
{
	char *revEd;
	int lastIndex = strlen(s) - 1;
	char b = '\n';

	for (; lastIndex >= 0; lastIndex--)
	{
		revEd = &s[lastIndex];
		_putchar(*revEd);
	}
	_putchar(b);
}
