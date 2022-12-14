#include <stdlib.h>
#include <time.h>
/* more headers goes there */

#include <stdio.h>

int runFunc(int n);

/* betty style doc for function main goes there */

/**
 * runFunc - runs checking function
 * @n: is the variable used
 *
 * Return: last digit is returned
 */

int runFunc(int n)
{
	int divAttempts = 0;
	int divAmount = 1;
	int lastDig = 0;

	for (; n / divAmount > 0; divAmount *= 10)
	{
		divAttempts += 1;
	}

	for (; divAttempts > 0; divAttempts--)
	{
		n %= divAmount;
		divAmount /= 10;

		if (divAmount == 1)
		{
			lastDig = n;
		}
	}
	return (lastDig);
}

/**
 * main - the actual function to run
 *
 * Return: zero is returned
 */

int main(void)
{
	int n;
	int lDig = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	/* this part computes for last digit */
	if (n < 0)
	{
		n *= -1;
		lDig = -1 * runFunc(n);
		n *= -1;
	}
	else
	{
		lDig = runFunc(n);
	}

	/* this part prints to output */
	if (lDig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lDig);
	}
	else if (lDig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lDig);
	}
	else if (lDig < 6 && lDig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lDig);
	}

	return (0);
}
