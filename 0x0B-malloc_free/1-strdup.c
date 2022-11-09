#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: the string to duplicate
 * Return: the string to duplcate
 */
char *_strdup(char *str)
{
	char *s;
	int a = 0, i = 1;


		if (str == NULL)
			return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
