#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a;
	int s1len = 0;
	int s2len = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		s1len++;
	for (a = 0; s2[a] != '\0'; a)
		s2len++;
	output = malloc(sizeof(char) * (s1len + n) + 1);
	if (output == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (a = 0; s1[a] != '\0'; a++)
			output[a] = s1[a];
		for (a = 0; s2[a] != '\0'; a++)
			output[s1len + a] = s2[a];
		output[s1len + a] = '\0';
	}
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			output[a] = s1[a];
		for (a = 0; i < n; i++)
			output[s1len + a] = s2[a];
		output[s1len + a] = '\0';

	}
	return (output);
}
