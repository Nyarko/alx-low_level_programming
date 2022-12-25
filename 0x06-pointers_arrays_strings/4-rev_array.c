#include <stdio.h>

int _putchar(char c);

/**
 * reverse_array - function to reverse an array
 * @a: array variable
 * @n: size variable
 * _putchar - printing function
 * return - no return value for void function
 */

void reverse_array(int *a, int n)
{
	int *b;
	int i;
	int j = 0;

	for (i = n - 1; i >= 0; i--)
	{
		b = &a[i];
		if (*b != 0 && j < n)
		{
			_putchar(",");
			_putchar(" ");
		}
		_putchar(*b);
		j++;
	}
	_putchar("\n");
}	
