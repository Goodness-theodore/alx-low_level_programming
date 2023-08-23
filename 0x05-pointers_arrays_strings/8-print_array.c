#include "main.h"

/**
 * print_array - Prints n element of an array
 * @a: Array of integers
 * @n: Nmuber of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d, ", a[x]);
	}
	if (x == (n - 1))
	{
		printf(", ");
	}
		printf("\n");
}
