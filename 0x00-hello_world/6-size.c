#include <stdio.h>
/**
 * main - A program that prints the sizes of various types on the computer
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float h;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int; %lu byte(s)\n", (unsighed long)sizeof(b));
printf("Size of a long int; %lu byte(s)\n", (unsighed long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsighed long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(h));
return (0);
}
