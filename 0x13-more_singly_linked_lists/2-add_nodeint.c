#include "lists.h"

/**
 * add_nodeint - function that add a new node at the beginning of a linked list
 * @head: address to the first node in the list
 * @n: data to be inserted in that new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *str;

	str = malloc(sizeof(listint_t));
	if (!str)
		return (NULL);

	str->n = n;
	str->next = *head;
	*head = str;

	return (str);
}
