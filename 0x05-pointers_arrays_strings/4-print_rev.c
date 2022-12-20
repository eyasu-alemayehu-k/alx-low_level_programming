#include "main.h"

/**
* print_rev - print string revers.
* @s : array pointer
* Return : string
*/
void print_rev(char *s)
{
	int len, i;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = len; i > 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
