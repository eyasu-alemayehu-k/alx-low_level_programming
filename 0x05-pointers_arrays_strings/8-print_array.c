#include "main.h"
#include <stdio.h>

/**
* print_array - print n size string.
* @a : array pointer
* @n : integer number
* Return : string
*/
void print_array(int *a, int n)
{
	int len;

	len = 0;
	while (len <= n - 1)
	{
		printf("%d", *(a + len));
		if (len < n - 1)
		{
			printf(", ");
		}
		len++;
	}
	printf("\n");
}
