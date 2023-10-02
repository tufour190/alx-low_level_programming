#include <stdlib.h>
#include "main.h"

/**
 * *create_array - function that creates an array of chars,
 * and assigns char c
 * @size: size of the array
 * @c: char to initialize the array
 *
 * Return: pointer to the array (Success) or NULL (fail)
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	t = (char *) malloc(sizeof(char) * size);

	if (t == NULL)
		return (0);

	while (i < size)
	{
		*(t + i) = c;
		i++;
	}

	*(t + i) = '\0';

	return (t);
}
