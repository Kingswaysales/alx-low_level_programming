#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The charcter to prit
 * nt
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropiately/
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
