#include "main.h"

/**
* puts2 - print string.
* @str : array pointer
* Return : string
*/
void puts2(char *str)
{
	int len;

	len = 0;
	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len += 2;
	}
	_putchar('\n');
}
