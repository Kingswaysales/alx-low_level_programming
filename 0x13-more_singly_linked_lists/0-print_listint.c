#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Prints all the elements of a linked list
 * @h: The head of the linked list
 * Return: The number of nodes in the linked lists.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
