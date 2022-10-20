#include "main.h"
#include <stdio.h>

/**
* _isupper - check if a character is uppercase
* @c: Variable text
* Return: 1 for uppercase or 0 for anthing else
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);

	}

	return (0);
}
