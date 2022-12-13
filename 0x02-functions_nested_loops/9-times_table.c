#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * return: times table
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
