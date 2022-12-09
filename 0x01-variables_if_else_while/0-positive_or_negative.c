#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entery point
 *
 * Return Always 0 (success)
 */
int main(void)
{
	/*check if the number is positive, negative or zer */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n",n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n",n);
	}
	else
	{
	printf("%d is zero\n",n);
	}
	return (0);
}
