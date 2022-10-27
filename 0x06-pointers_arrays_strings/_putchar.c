#include "main.h"
#include <unistd.h>

/**
 * _putchar - c writes the character to stdout
 * @c: The char to print
 * Return: On success 1
 * On error, -1 is returned, error is set appropiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
