#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked lists
 * @h: linked list of type listint_t to be traversed
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
