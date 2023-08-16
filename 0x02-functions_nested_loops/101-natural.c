#include <stdio.h>
/**
 * main - Entry point
 * Description: 'A program that prints the sum of all the multiples 3 or 5'
 * Return: 0 (Success)
 */
int main(void)
{
	int a, m = 0;

	while (a < 1024)
	{
	if ((a % 3 == 0) || (a % 5 == 0))
	{
	m += a;
	}
	a++;
	}
	printf("%d\n", m);
	return (0);
}
