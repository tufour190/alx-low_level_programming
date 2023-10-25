#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node
 * at a certain index in a linked list
 * @head: address to the first element in the list
 * @index: index of the node to be deleted
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hodl = *head;
	listint_t *mee = NULL;
	unsigned int m = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(hodl);
		return (1);
	}

	while (m < index - 1)
	{
		if (!hodl || !(hodl->next))
			return (-1);
		hodl = hodl->next;
		m++;
	}


	mee = hodl->next;
	hodl->next = mee->next;
	free(mee);

	return (1);
}
