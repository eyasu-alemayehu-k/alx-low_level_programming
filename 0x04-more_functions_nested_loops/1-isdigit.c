#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c : integer number
 * Return: 1 if c is digit or 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
