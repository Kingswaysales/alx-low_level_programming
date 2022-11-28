#include "lists.h"

/**
 * pop_listint - deletes the head nodes of
 * a linked list.
 * @head: head of a list.
 * Return: Head node's data
 */
int pop_listint(listint_t **head)
{
	int nnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	nnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (nnode);
}
