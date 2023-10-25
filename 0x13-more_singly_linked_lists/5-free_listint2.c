#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: adress to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *hodl;

	if (head == NULL)
		return;

	while (*head)
	{
		hodl = (*head)->next;
		free(*head);
		*head = hodl;
	}

	*head = NULL;
}
