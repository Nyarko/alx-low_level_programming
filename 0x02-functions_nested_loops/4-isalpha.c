#include "main.h"

/**
 * _isalpha - function to check alphabet
 * @c: variable to work on
 *
 * Return: returns 1 if alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	int n = 0;
	/* code starts here */
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		n = 1;
	} else
	{
		n = 0;
	}
	return (n);
}
