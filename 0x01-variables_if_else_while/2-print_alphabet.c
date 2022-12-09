#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
