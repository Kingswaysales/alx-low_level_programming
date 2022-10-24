#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps two integer
 * @a: int a
 * @b: int b
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int q;


	q = *a;
	*a = *b;
	*b = q;
}
