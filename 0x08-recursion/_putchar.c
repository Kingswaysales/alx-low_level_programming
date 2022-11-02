#include "main.h"
#include <stdio.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 * Return: On success1
 * On error, -1 is returned and error is set appropiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
