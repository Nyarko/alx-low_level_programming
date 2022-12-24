#include <string.h>

/**
 * _strcat - function to concatenate strings
 * @dest: destination variable
 * @src: source variable
 * Return: the concatenated string is returned.
 */

char *_strcat(char *dest, char *src)
{
	int dLen = strlen(dest);
	int sLen = strlen(src);
	int i;

	for (i = 0; i < sLen; i++)
	{
		dest[dLen + i] = src[i];
	}
	dest[dLen + sLen + 1] = '\0';
	return (dest);
}
