#include "main.h"

/**
 * print_times_table - print the n times table
 * @n : integer number
 * Return: times table with n range
 */
void print_times_table(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (((i * j) / 10) == 0)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar('0' + ((i * j) % 10));
			}
			else
			{
				_putchar('0' + ((i * j) / 10));
				_putchar('0' + ((i * j) % 10));
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
