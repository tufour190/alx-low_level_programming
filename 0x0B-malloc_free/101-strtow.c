#include <stdlib.h>
#include "main.h"

/**
 * count_word - counts the number of words in a string
 * @s: string to be evaluated
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int mee, i, w;

	mee = 0;
	w = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			mee = 0;
		else if (mee == 0)
		{
			mee = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - function that splits a string into words
 * @str: string to be splited
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (fail)
 */
char **strtow(char *str)
{
	char **arg, *tem;
	int i, j = 0, new = 0, words, c = 0, start, end;

	while (*(str + new))
		new++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	arg = (char **) malloc(sizeof(char *) * (words + 1));
	if (arg == NULL)
		return (NULL);

	for (i = 0; i <= new; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tem = (char *) malloc(sizeof(char) * (c + 1));
				if (tem == NULL)
					return (NULL);
				while (start < end)
					*tem++ = str[start++];
				*tem = '\0';
				arg[j] = tem - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	arg[j] = NULL;

	return (arg);
}
