#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print the sum of even Fibonacci numbers'
 * Return: 0 (Success)
 */
int main(void)
{
	int g = 0;
	long h = 1, i = 2, sum = i;

	while (i + h < 4000000)
	{
	i += h;
	if (i % 2 == 0)
	sum += i;
	h = i - h;
	++g;
	}
	printf("%ld\n", sum);
	return (0);
}
