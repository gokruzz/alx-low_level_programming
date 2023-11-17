#include "lists.h"

/**
  * list_len - returns the number of elements in a linked list
  * @h: the head
  * Return: number of elements
  */

size_t list_len(const list_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
