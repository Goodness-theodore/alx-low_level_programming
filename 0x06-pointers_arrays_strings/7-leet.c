#include "main.h"

/**
 * leet - encodes a string into 1337speak
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
	int j, i;

	char s1[] = "aAeEo0tT1L";
	char s2[] = "4433007711";

	for (j = 0; n[j] != '\0'; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (n[j] == s1[i])
			n[j] = s2[i];
		}
	}
	return (n);
}
