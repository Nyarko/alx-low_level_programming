#include <string.h>

/**
 * rev_string - function to print string in reverse
 * @s: variable to be printed
 * Return: no return for void function
 */

void rev_string(char *s)
{
	char *revEd[(strlen(s) + 1)];
	int lastIndex = strlen(s) - 1;
	int i = 0;

	for (; lastIndex >= 0; lastIndex--)
	{
		revEd[i] = &s[lastIndex];
		i++;
	}

	for (int j = 0; j < strlen(s); j++)
	{
		s[j] = *revEd[j];
	}
}
