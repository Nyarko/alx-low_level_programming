#include "main.h"

/**
 * _isupper - function to check character case
 * @c: variable to work with
 *
 * Return: returns 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int retVal = 0;
	/* code goes here */
	if (c >= 65 && c <= 90)
	{
		retVal = 1;
	}
	else
	{
		retval = 0;
	}
	return (retVal);
}
