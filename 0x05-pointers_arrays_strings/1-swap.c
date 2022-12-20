#include "main.h"

/**
* swap_int -  swaps the values of two integers
* @a : integer pointer
* @b : integer pointer
* Return : swap
*/

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
