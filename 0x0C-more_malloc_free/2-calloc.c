#include <stdlib.h>
#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char character to be be copied
 * @n: number of times to be copied
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to reserved  memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);

	_memset(a, 0, nmemb * size);

	return (a);
}
