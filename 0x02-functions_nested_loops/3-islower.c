#include "main.h"

/**
 * _islower - function to check lowercase
 *
 * Return: returns 1 is lowercase
 */

int _islower(int c)
{
	int n;
	
	if (c >= 97 && c <= 122)
	{
		n = 1;
	} else
	{
		n = 0;
	}
	return (n);
}
