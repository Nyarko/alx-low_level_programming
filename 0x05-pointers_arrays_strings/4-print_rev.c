#include <string.h>
#include <unistd.h>

int _putchar(char c);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
*int _putchar(char c)
*{
*	return (write(1, &c, 1));
*}
*/

/**
 * print_rev - function to print string in reverse
 * @s: variable to be printed
 * @lastIndex: last index of the string
 * @revEd: variable to store reversed items
 * _putchar - manual function
 * Return: no return for void function
 */

void print_rev(char *s)
{
	char *revEd;
	int lastIndex = strlen(s) - 1;
	
	for (; lastIndex >= 0; lastIndex--)
	{
		revEd = &s[lastIndex];
		_putchar(*revEd);
	}
}
