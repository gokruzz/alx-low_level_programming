#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		list = *head;
		free(*head);
		*head = list->next;
	}
	*head = NULL;
}
