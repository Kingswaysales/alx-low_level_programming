#include "main.h"
#include <stdlib.h>

/**
 * create_array - array for prints a string
 * @size: number elements array
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{

unsigned int i;
char *s;

if (size == 0)
	return (NULL);

s = mallpc(size * sizeof(char));

if (s == NULL)
	return (NULL);

for (i = 0; i < size; i++)
{
	s[i] = c;
}

return (s);
}
