#include "lists.h"

/**
 * sum_listint - finds the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *hodl = head;

	while (hodl)
	{
		sum += hodl->n;
		hodl = hodl->next;
	}

	return (sum);
}
