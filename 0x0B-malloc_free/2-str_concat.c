#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: second string to be concatenated
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *new_st;
	unsigned int i = 0, j = 0, tee1 = 0, tee2 = 0;

	while (s1 && s1[tee1])
		tee1++;
	while (s2 && s2[tee2])
		tee2++;

	new_st = malloc(sizeof(char) * (tee1 + tee2 + 1));
	if (new_st == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < tee1)
		{
			new_st[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (tee1 + tee2))
		{
			new_st[i] = s2[j];
			i++;
			j++;
		}
	}
	new_st[i] = '\0';

	return (new_st);
}
