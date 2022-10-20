#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int sum = n % 10;

	if (n < 0)
	{
		_putchar(-sum + '0');
		return (_putchar(-sum + '0'));
	}
	else
	{
		_putchar(sum + '0');
		return (_putchar(sum + '0'));
	}
}
