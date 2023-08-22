#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{

	int m;

	m = *a;
	*a = *b;
	*b = m;
}
