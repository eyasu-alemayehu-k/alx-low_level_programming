#include "main.h"

/**
 * print_numbers - print the number 0 to 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	int num;

	num = 0;
	for (num = 0; num < 10; num++)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
	return (0);
}

