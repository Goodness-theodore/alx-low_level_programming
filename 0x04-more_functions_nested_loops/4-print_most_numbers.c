#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * Description: Print the numbers excluding 2 and 4
 * Return: The numbers since 0 up to 9
 */

void print_most_numbers(void)
{

	int c;

	for (c = 48; c < 58; c++)
	{
	if (c != 50)
	{
	if (c != 52)
	{
	_putchar(c);
	}
	}
	}
	_putchar('\n');
}
