#include "main.h"

/**
* _isupper - checks if a character is uppercase
* @c: Variable text
* Return: 1 for uppercase or 0 for anthing else
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
