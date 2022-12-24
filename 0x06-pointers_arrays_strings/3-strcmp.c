#include <string.h>

/**
 * _strcmp - function to compare strings
 * @s1: variable for first string
 * @s2: variable for second string
 * Return: the charNum is returned.
 */

int _strcmp(char *s1, char *s2)
{
	int charNum;
	int s1Len = strlen(s1);
	int s2Len = strlen(s2);
	int i;
	int j;
	int a;
	int n[s1Len - 1];
	int m[s2Len - 1];

	for (i = 0; i < s1Len && s1[i] != '\0'; i++)
	{
		n[i] = s1[i];
		/*printf("first %d\n", n[i]);*/
	}

	for (j = 0; j < s2Len && s2[j] != '\0'; j++)
	{
		m[j] = s2[j];
		/*printf("Secon %d\n", m[j]);*/
	}
	
	if (i > j)
	{
		/*printf("\n for i is running\n");*/
		a = i;
	}
	else
       	{
		/*printf("\n for j is running\n");*/
		a = j;
	}
	
	int boTh[a];
	
	for(int k = 0; k < a; k++)
	{
		boTh[k] = n[k] - m[k];
		/*printf("Both is %d\n", boTh[k]);*/
	}
	
	for (int b = 0; b < a; b++)
	{
		if (boTh[b] > 0)
		{
			return (boTh[b]);
		}
		else if (boTh[b] < 0)
		{
			return (boTh[b]);
		}
		else if (b == a - 1)
		{
			return (boTh[b]);
		}
	}
}
