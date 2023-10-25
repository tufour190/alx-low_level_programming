#include "lists.h"

/**
 * free_listint_safe - function that frees a linked list
 * @h: address to the first node in the linked list
 *
 * Return: the size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t form_len = 0;
	int str;
	listint_t *mee;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		str = *h - (*h)->next;
		if (str > 0)
		{
			mee = (*h)->next;
			free(*h);
			*h = mee;
			form_len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			form_len++;
			break;
		}
	}

	*h = NULL;

	return (form_len);
}
