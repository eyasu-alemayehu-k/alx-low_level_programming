#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, temp = 0;
	unsigned long int value;
	unsigned long int number = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		value = number >> i;
		if (value & 1)
			temp++;
	}

	return (temp);
}
