#include <stdlib.h>
#include <time.h>
/* more headers goes there */

#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - the actual function to run
 *
 * Return: zero is returned
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	int lDig;
	
	lDig = n[(sizeof(n) - 1)];

	if (lDig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lDig);
	}
	else if (lDig == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lDig);
	}
	else if (lDig < 6 && lDig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lDig);
	}

	return (0);
}
