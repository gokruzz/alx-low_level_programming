#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t  number = 0;

	while (h != 0)
	{
		number++;

		h = h->next;
	}
	return (number);
}
