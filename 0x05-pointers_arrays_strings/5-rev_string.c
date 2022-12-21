#include <string.h>

/**
 * rev_string - function to print string in reverse
 * @s: variable to be printed
 * Return: no return for void function
 */

void rev_string(char *s)
{
	int sLen = (int)strlen(s);
	char *revEd[sLen];
	int lastIndex = strlen(s) - 1;
	int i = 0;
	int j;

	for (; lastIndex >= 0; lastIndex--)
	{
		revEd[i] = &s[lastIndex];
		i++;
	}

	for (j = 0; j < sLen; j++)
	{
		s[j] = *revEd[j];
	}
}
