#include <string.h>

/**
 * _strcmp - function to compare strings
 * @s1: variable for first string
 * @s2: variable for second string
 * Return: the charNum is returned.
 */

int _strcmp(char *s1, char *s2)
{
	int charNum = 0;
	int s1Len = strlen(s1);
	int s2Len = strlen(s2);
	int i;
	int j;

	while (charNum == 0 && i < (s1Len + 1))
	{
		for (i = 0; i < s1Len && s1[i] != '\0'; i++)
		{
			int n = s1[i];

			charNum += n;

			for (j = i; j < s2Len && s2[j] != '\0'; j++)
			{
				int m = s2[j];

				charNum -= m;
			}
		}
	}
	return (charNum);
}
