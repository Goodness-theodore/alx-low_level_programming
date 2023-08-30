#include "main.h"

/**
 * _strspn - A function that gets the length
 * of a prefix substring
 * @s: pointer to the number of bytes
 * @accept: bytes from intial segment
 * Return: 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int y;

	while (*s)
	{
	for (y = 0; accept[y]; y++)
	{
	if (*s == accept[y])
	{
	i++;
	break;
	}
	else if (accept[y + 1] == '\0')
	return (i);
	}
	s++;
	}
	return (i);
}
