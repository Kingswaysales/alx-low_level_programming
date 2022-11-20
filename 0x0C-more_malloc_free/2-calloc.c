#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocated memoria for nmeb element the size bytes
 * @nmemb: number of element in the array
 * @size: bytes for each position in array
 * Return: pointer void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i = 0, l = 0;

	if (nmemb == 0 || size == 0)
	return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
	i++;
	}

	return (p);
}
