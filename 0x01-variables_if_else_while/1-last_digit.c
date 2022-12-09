#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entery point
 *
 * Return: Always 0 (success{
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
	printf("Last digit of %d is greater than %d", n, n % 10);
	else if (n % 10 < 6 && n % 10 != 0)
	printf("Last digit of %d is less than %d and not 0", n, n % 10);
	else
	printf("Last digit of %d is %d and is 0", n, n % 10);
	return (0);
}
