#include "main.h"

/**
 * _abs - computes the absolute value
 * @n : number
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	return (n);
}
