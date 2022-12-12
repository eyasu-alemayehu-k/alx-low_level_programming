#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char t1,t2,o1,o2;

	for (t2 = '0'; t2 <= '9'; t2++)
	{
		for (o2 = '0'; o2 <= '9'; o2++)
		{
			for (t1 = 0 + t2; t1 <= '9'; t1++)
			{
				for (o1 = 0 + o2; o1 <= '9'; o1++)
				{
					if (t2 != t1 || o2 != o1)
					{
						if (o2 < '8')
						{
							putchar(t2);
							putchar(o2);
							putchar(' ');
							putchar(t1);
							putchar(o1);
							if (t2 != '9' || o2 != '8')
							{
								putchar(',');
								putchar(' ');
							}
						}
					}
				}
			}
		}
	}
