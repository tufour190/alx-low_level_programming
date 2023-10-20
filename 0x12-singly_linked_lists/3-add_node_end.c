#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to be put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newStr;
	list_t *tmpStr = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newStr = malloc(sizeof(list_t));
	if (!newStr)
		return (NULL);

	newStr->str = strdup(str);
	newStr->len = len;
	newStr->next = NULL;

	if (*head == NULL)
	{
		*head = newStr;
		return (newStr);
	}

	while (tmpStr->next)
		tmpStr = tmpStr->next;

	tmpStr->next = newStr;

	return (newStr);
}
