#include "main.h"

/**
 * puts2 - Prints every character of a string
 * @str: The string to be treated
 *
 * Return: void
 */

void puts2(char *str)
{

	int a;
	int b = 0;

	while (str[b] != '\n')
	{
	b++;
	}

	for (a = 0; a < b; a += 2)
	{
	_putchar(str[a]);
	}
	_putchar('\n');
}
