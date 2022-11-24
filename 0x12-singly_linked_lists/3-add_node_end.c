#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end - adds node at the end
 * @head: point to the head
 * @str: the string to put into it
 * Return: pointer to new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nchar;

	new = mallow(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;
	new->len = nchar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
