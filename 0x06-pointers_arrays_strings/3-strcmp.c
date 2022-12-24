#include <string.h>

/**
 * _strcmp - function to compare strings
 * @s1: variable for first string
 * @s2: variable for second string
 * Return: the charNum is returned.
 */

int _strcmp(char *s1, char *s2)
{
	int charNum;
	int s1Len = strlen(s1);
	int i;
	int j;
	int n;
	int m;

	for (i = 0; i < s1Len && s1[i] != '\0'; i++)
	{
		n = s1[i];

		for (j = i; j < (i + 1); j++)
		{
			m = s2[j];
			charNum = n - m;
		}

		if (charNum > 0)
		{
			return (charNum);
		}
		else if (charNum < 0)
		{
			return (charNum);
		}
		else if (s2[j] == '\0')
		{
			return (charNum);
		}
	}
}
