#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: first node in the linked list
 * @index: index of the node to be returned
 *
 * Return: address of the node we're searching for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *hodl = head;

	while (hodl && m < index)
	{
		hodl = hodl->next;
		m++;
	}

	return (hodl ? hodl : NULL);
}
