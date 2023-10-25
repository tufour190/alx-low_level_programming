#include "lists.h"
/**
 * print_listint_safe - prints a linked list safely with a loop
 * @head: address to the 1st node of the linked list
 * Return:  the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *mee_n = NULL;
	const listint_t *l_n = NULL;
	size_t len = 0;
	size_t pee_n;

	mee_n = head;
	while (mee_n)
	{
		printf("[%p] %d\n", (void *)mee_n, mee_n->n);
		len++;
		mee_n = mee_n->next;
		l_n = head;
		pee_n = 0;
		while (pee_n < len)
		{
			if (mee_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)mee_n, mee_n->n);
				return (len);
			}
			l_n = l_n->next;
			pee_n++;
		}
		if (!head)
			exit(98);
	}
	return (len);
}
