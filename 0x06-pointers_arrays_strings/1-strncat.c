#include <string.h>

/**
 * _strncat - function to concatenate strings
 * @dest: destination variable
 * @src: source variable
 * @n: checking the byte size
 * Return: the concatenated string is returned.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dLen = strlen(dest);
	int sLen = strlen(src);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dLen + i] = src[i];
	}
	dest[dLen + sLen + 1] = '\0';
	return (dest);
}
