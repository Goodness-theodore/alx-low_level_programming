#include <stdio.h>
/**
 * main - Entry point
 * Description: 'A program that prints the first 50 Fibonacci numbers'
 * Return: 0 (Success)
 */
int main(void)
{
	int g = 0;
	long h = 1, i = 2;

	while (g < 50)
	{
	if (g == 0)
	printf("%ld", h);
	else if (g == 1)
	printf(", %ld", i);
	else
	{
	i += h;
	h = i - h;
	printf(", %ld", i);
	}
	++g;
	}
	printf("\n");
	return (0);
}
