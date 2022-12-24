#include <string.h>

/**
 * _strncat - function to concatenate strings
 * @dest: destination variable
 * @src: source variable
 * @n: checking the byte size
 * Return: the concatenated string is returned.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';
	return (dest);
}
