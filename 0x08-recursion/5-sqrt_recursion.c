#include "main.h"

int _sqrt(int n, int i);

/**
 * find_sqrt - Finds the natural square root of an inputted number
 * @num: the number to find the square root of
 * @root: The root to be tested
 * Return: if the number has a natural square root - the square root
 * if the numbe does not have a natural sqaure root - -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square root
 * @n: numbers to calculate the square root
 * @i: iterate number
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt - i * i;

	if (sqrt > n)
		return (-1);

	return (_sqrt(n, i + 1));
}
