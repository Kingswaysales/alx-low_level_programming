/*
 * File: 4-add.c
 * Author: Marco
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the sum of args positive numbers
 * @argc: arguments counts
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);

	}

	printf("%d\n", sum);

	return (0);
}
