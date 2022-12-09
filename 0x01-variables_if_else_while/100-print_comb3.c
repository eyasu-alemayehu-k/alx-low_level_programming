#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = 1 + a; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
				if (a < 9)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
