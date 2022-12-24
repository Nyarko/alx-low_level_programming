#include <string.h>

/**
 * _strcmp - function to compare strings
 * @charNum: variable to store comparison value
 * Return: the charNum is returned.
 */

int _strcmp(char *s1, char *s2)
{
	int charNum = 0;
	int s1Len = strlen(s1);
	int s2Len = strlen(s2);
	int i;
	int j;

	for (i = 0; i < s1Len && s1[i] != '\0'; i++)
	{
		int n = s1[i];
		charNum += n;
	}
	for (j = 0; j < s2Len && s2[i] != '\0'; j++)
	{
		int m = s2[i];
		charNum -= m;
	}
	return (charNum);
}
