#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	n = 0;
	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
