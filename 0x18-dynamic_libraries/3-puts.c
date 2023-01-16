#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints string
 * @str: string
 * Return: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
