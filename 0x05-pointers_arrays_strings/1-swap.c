/**
 * swap_int - swaps values of two integers
 * @a: the first variable to work with
 * @b: the second variable to work with
 * Return: not a necessity for void functions
 */
void swap_int(int *a, int *b)
{
	int *c = *a;
	*a = *b;
	*b = *c;
}
