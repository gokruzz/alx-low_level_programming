#include "lists.h"

/**
 * reverse_listint - a function to reverse a linked list
 * @head: double pointer
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_ptr;
	listint_t *ptr;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	prev_ptr = *head;
	ptr = (*head)->next;

	while (ptr != NULL)
	{
		(*head)->next = ptr->next;
		ptr->next = prev_ptr;
		prev_ptr = ptr;
		ptr = (*head)->next;
	}
	*head = prev_ptr;

	return (*head);
}
