#include <stdio.h>

/**
 *  main - prints a series of digits with commais
 *  Return: Always 0
 */
int main(void)
{

	int n;

	for (n = 0, n < 9, n++)
	{
		putchar(n);
		if (n != 7)
		{

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
