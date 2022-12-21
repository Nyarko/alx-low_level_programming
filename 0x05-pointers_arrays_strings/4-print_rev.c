#include <string.h>
#include <unistd.h>

int _putchar(char c);

/**
 * print_rev - function to print string in reverse
 * @s: variable to be printed
 * @lastIndex: last index of the string
 * @revEd: variable to store reversed items
 * _putchar - manual function
 * @c: the character to print
 * @b: new line variable
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
