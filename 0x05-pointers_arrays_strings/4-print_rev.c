#include <string.h>
#include <stdio.h>
/**
 * print_rev - function to print string in reverse
 * @s: variable to be printed
 * @lastIndex: last index of the string
 * @revEd: variable to store reversed items
 * puts - function from stdlib
 * Return: no return for void function
 */

void print_rev(char *s)
{
	char *revEd;
	int lastIndex = strlen(s) - 1;
	
	for (; lastIndex >= 0; lastIndex--)
	{
		revEd = s[lastIndex];
	}
	puts(revEd);
}
