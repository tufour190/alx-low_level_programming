#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to be added in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newStr;
	unsigned int len = 0;

	while (str[len])
		len++;

	newStr = malloc(sizeof(list_t));
	if (!newStr)
		return (NULL);

	newStr->str = strdup(str);
	newStr->len = len;
	newStr->next = (*head);
	(*head) = newStr;

	return (*head);
}
