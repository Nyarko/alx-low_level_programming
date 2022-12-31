#include "main.h"

/**
 * _isdigit - function to check character case
 * @c: variable to work with
 *
 * Return: returns 1 if uppercase, 0 otherwise
 */

int _isdigit(int c)
{
	int retVal = 0;
	/* code goes here */
	if (c >= 48 && c <= 57)
	{
		retVal = 1;
	}
	else
	{
		retval = 0;
	}
	return (retVal);
}
