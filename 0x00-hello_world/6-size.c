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

	printf("Size of a char: %d", sizeof(chaRacter));
	printf("Size of an int: %d", sizeof(inTeger));
	printf("Size of a float: %d", sizeof(floatData));
	printf("Size of a long int: %d", sizeof(linTeger));
	printf("Size of a long long int: %d", sizeof(llinTeger));
	return (0);
}
