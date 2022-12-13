#include "main.h"

/**
 * _isalpha - check if input is a alphabet letter
 * @c : integer number
 * Return: 1 if c is alphabet letter 0 otherwise
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
