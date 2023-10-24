#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of a linked list
 * @head: address to the first element in the list
 * @n: data to be inserted in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newStr;
	listint_t *p = *head;

	newStr = malloc(sizeof(listint_t));
	if (!newStr)
		return (NULL);

	newStr->n = n;
	newStr->next = NULL;

	if (*head == NULL)
	{
		*head = newStr;
		return (newStr);
	}

	while (p->next)
		p = p->next;

	p->next = newStr;

	return (newStr);
}
