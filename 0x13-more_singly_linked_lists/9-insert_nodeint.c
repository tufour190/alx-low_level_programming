#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position in a linked list
 * @head: address to the first node in the list
 * @idx: the index at which the new node isinserted
 * @n: data to be inserted in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *newStr;
	listint_t *hodl = *head;

	newStr = malloc(sizeof(listint_t));
	if (!newStr || !head)
		return (NULL);

	newStr->n = n;
	newStr->next = NULL;

	if (idx == 0)
	{
		newStr->next = *head;
		*head = newStr;
		return (newStr);
	}

	for (m = 0; hodl && m < idx; m++)
	{
		if (m == idx - 1)
		{
			newStr->next = hodl->next;
			hodl->next = newStr;
			return (newStr);
		}
		else
			hodl = hodl->next;
	}

	return (NULL);
}
