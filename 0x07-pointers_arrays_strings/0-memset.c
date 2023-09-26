#include "main.h"

/**
 * *_memset - this function fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to be copied
 * n: number of times b will be copied
 * Return: a pointer to the memory area s
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
