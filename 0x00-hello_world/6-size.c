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

	printf("Size of a char: %u byte(s)\n", sizeof(chaRacter));
	printf("Size of an int: %u byte(s)\n", sizeof(inTeger));
	printf("Size of a long int: %u byte(s)\n", sizeof(linTeger));
	printf("Size of a long long int: %u bytes(s)\n", sizeof(llinTeger));
	printf("Size of a float: %u byte(s)\n", sizeof(floatData));
	return (0);
}
