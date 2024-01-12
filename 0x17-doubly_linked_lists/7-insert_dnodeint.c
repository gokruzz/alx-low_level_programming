#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer
 * @idx: index of the list where new node will be added
 * @n:the element to be added
 * Return: address of new node || NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int i = 0;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		tmp = *h;
		i = 1;

		if (tmp != NULL)
			while (tmp->prev != NULL)
				tmp = tmp->prev;
		while (tmp != NULL)
		{
			if (i == idx)
				if (tmp->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
						new_node->n = n;
						new_node->next = tmp->next;
						new_node->prev = tmp;
						tmp->next->prev = new_node;
						tmp->next = new_node;
				break;
			tmp = tmp->next;
			i++;
		}
	}
	return (new_node);
}
