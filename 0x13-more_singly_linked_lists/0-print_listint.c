#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: The head of the listint_t list
 * Return: The number of nodes in the listint_t lists.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}
