#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: address of the first element in the linked list
 *
 * Return: data of the head node that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
