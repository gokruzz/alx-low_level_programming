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
	dlistint_t *new_node, *tmp = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if ((*h) == NULL)
	{
		if (idx == 0)
		{
			*h = new_node;
			return (new_node);
		}
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (tmp->next != NULL && i != idx)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == idx)
	{
		new_node->prev = tmp;
		new_node->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = new_node;
		tmp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
