#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'Print numbers of base 16'
 * Return: Always 0
 */
int main(void)
{

	int y;
	int z;

	for (y = 48; y <= 57; y++)
	{
	putchar(y);
	}
	for (z = 97; z <= 102; z++)
	{
	putchar(z);
	}
	putchar('\n');

	return (0);
}
