#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c : integer number
 * Return: 1 if uppercase or 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
