#include "main.h"

/**
 * print_number - Print numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
	_putchar(a + '0');
	}
	_putchar('\n');
}
