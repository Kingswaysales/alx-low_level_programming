#include "lists.h"
#include <string.h>

/**add_node_end - adds a node at the end
 * @head: points to the head
 * @str the string to put into it
 * Return point to new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *last;unsinged int i;

	if (!(head && str))
		return (NULL);

	node = malloc(sizeof(list_t));
	if (!(node)
			return (NULL);

			node->str = strdup(str);
			for (i = 0; str[i]; i++)
			node->len
