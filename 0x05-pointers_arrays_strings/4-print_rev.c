#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 * Return: string
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; 1 >= 0; 1--)
		_putchar(s[i]);

	_putchar('\n')
}
