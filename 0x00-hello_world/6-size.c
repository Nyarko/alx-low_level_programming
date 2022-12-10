#include <stdio.h>
/**
 * main - main function body
 * printf - fuction to print to output
 * int: integer datatype
 * float: float datatype
 * char: character datatyep
 * long int: long integer datatypes
 * Return: 0 if the code runs perfectly
 */
int main(void)
{
	int inTeger;
	float floatData;
	char chaRacter;
	long int linTeger;
	long long int llinTeger;

	printf("Size of a char: %d byte(s)\n", sizeof(chaRacter));
	printf("Size of an int: %d byte(s)\n", sizeof(inTeger));
	printf("Size of a float: %d byte(s)\n", sizeof(floatData));
	printf("Size of a long int: %d byte(s)\n", sizeof(linTeger));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(llinTeger));
	return (0);
}
