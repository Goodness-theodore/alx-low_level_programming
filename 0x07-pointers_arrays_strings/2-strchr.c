#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: pointer to the first occurence
 * @c: in the string
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return (0);
}
