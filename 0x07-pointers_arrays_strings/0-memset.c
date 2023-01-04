#include "main.h"

/**
 * _memset - memset similar function
 * @s: pointer to fill
 * @b: what to fill s with
 * @n: number of bytes to fill with b
 *
 * Return: returns pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
