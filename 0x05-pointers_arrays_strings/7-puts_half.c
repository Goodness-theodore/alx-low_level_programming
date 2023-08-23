#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)
{
	int j = 0;
	int m;

	while (str[j] != '\n')
	{
	j++;
	}
		if (j % 2 == 1)
		{
		m = (j - 1) / 2;
		m += 1;
		}
	else
		{
		m = j / 2;
		}

	for (; m < j; m++)
	{
	_putchar(str[m]);
	}
	_putchar('\n');
}
