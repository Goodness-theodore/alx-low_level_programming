#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory
 * @b: the size to allocate
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else

	return (output);
}
