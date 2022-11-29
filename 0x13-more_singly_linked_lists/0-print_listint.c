#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Prints all the elements of a list.
 * @h: The head of a list.
 * Return: The numbers of nodes of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			nnodes++;
		}
	}

	return (nnodes);
}
