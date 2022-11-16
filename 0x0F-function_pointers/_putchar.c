#include "function_pointers.h"
#include <stdlib.h>


/**
 * _putchar - write the character c to stdout
 * @c: The charcter to print
 * Return: On success 1
 * On error, -1 is returned and error is set approtiately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
