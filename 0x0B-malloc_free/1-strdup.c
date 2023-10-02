#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - duplicates a string
 * to a newly allocated space in memory
 * @str: string to be duplicated
 *
 * Return: pointer to the copied string (Success), NULL (insufficient memory)
 */
char *_strdup(char *str)
{
	char *dop;
	unsigned int i, tee;

	i = 0;
	tee = 0;

	if (str == NULL)
		return (NULL);

	while (str[tee])
		tee++;

	dop = malloc(sizeof(char) * (tee + 1));

	if (dop == NULL)
		return (NULL);

	while ((dop[i] = str[i]) != '\0')
		i++;

	return (dop);
}
