#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n : number
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		n %= 10;
		putchar('0' + n);
		return (n);
	}
	else if (n == 0)
	{
		putchar('0' + 0);
		return (0);
	}
	else
	{
		n *= -1;
		n %= 10;
		putchar('0' + n);
		return (n);
	}
}
