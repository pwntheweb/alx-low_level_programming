#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and set the head to NULL
 * @head: a pointer to pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
