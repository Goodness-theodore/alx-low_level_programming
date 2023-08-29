#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: pointer to the pointer
 * @to: pointer char
 * Return: Always 0 (Success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
